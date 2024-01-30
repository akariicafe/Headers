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

+ (unsigned long long)maximumWidth;
+ (unsigned long long)maximumHeight;
+ (unsigned long long)minimumWidth;
+ (unsigned long long)minimumHeight;
+ (id)showWithSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)maximumHeightForExport;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })center;
- (void)willModify;
- (void)loadFromArchive:(const struct ShowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct SlideTreeArchive *x6; struct Size *x7; struct Reference *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; double x17; double x18; double x19; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ShowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct SlideTreeArchive *x6; struct Size *x7; struct Reference *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; double x17; double x18; double x19; } *)a0 archiver:(id)a1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1;
- (unsigned long long)indexOfSlideNode:(id)a0;
- (void)setStylesheetForThemePreview:(id)a0;
- (id)slideNodeAtIndex:(unsigned long long)a0;
- (id)slideNodesAtIndexes:(id)a0;

@end
