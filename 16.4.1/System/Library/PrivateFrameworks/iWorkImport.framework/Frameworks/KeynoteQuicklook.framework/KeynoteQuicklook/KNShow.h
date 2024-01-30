@class TSSStylesheet, KNSoundtrack, KNUIState, KNSlideTree, KNRecording, KNTheme;

@interface KNShow : TSPObject {
    KNSlideTree *_slideTree;
    KNRecording *_recording;
    double _autoplayTransitionDelay;
    double _autoplayBuildDelay;
    double _idleTimerDelay;
    long long _mode;
    BOOL _loopPresentation;
    BOOL _idleTimerActive;
    BOOL _automaticallyPlaysUponOpen;
    KNSoundtrack *_soundtrack;
}

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) KNUIState *uiState;
@property (retain, nonatomic) KNTheme *theme;
@property (retain, nonatomic) KNSlideTree *slideTree;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (nonatomic) double autoplayTransitionDelay;
@property (nonatomic) double autoplayBuildDelay;
@property (nonatomic) double idleTimerDelay;
@property (nonatomic) long long mode;
@property (retain, nonatomic) KNSoundtrack *soundtrack;
@property (retain, nonatomic) KNRecording *recording;
@property (readonly, nonatomic) BOOL hasInSyncRecording;
@property (nonatomic) BOOL loopPresentation;
@property (nonatomic) BOOL idleTimerActive;
@property (nonatomic) BOOL automaticallyPlaysUponOpen;
@property (readonly, nonatomic) BOOL slideNumbersVisible;
@property (readonly, nonatomic) BOOL needsToUpdateThumbnails;
@property (readonly, nonatomic) BOOL wasImportedAsPreUFF;
@property (nonatomic) BOOL localizeDocument;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;

+ (unsigned long long)maximumHeight;
+ (unsigned long long)minimumWidth;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumWidthForExport;
+ (id)showWithSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1;

- (struct CGPoint { double x0; double x1; })center;
- (void).cxx_destruct;
- (void)willModify;
- (void)saveToArchiver:(id)a0;
- (unsigned long long)indexOfSlideNode:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setStylesheetForThemePreview:(id)a0;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (id)slideNodeAtIndex:(unsigned long long)a0;
- (id)slideNodesAtIndexes:(id)a0;

@end
