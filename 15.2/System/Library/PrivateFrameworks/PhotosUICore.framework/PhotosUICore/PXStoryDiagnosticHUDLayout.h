@class PXStoryModel, NSString, NSTimer, PXStoryAnimationController, NSAttributedString, PXStoryRelatedController;
@protocol PXStoryDiagnosticHUDDataSource;

@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXChangeObserver, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _HUDTextSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    BOOL _wantsHUDContentVisible;
}

@property (retain, nonatomic) NSAttributedString *HUDText;
@property (readonly, nonatomic) NSAttributedString *badgeText;
@property (readonly, nonatomic) id<PXStoryDiagnosticHUDDataSource> dataSource;
@property (readonly, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PXStoryRelatedController *relatedController;
@property (retain, nonatomic) PXStoryModel *model;
@property (retain, nonatomic) PXStoryAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)safeAreaInsetsDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)axSpriteIndexes;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)dealloc;
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id /* block */)a0;
- (BOOL)_shouldDisplayContentForHUDType:(long long)a0;
- (void)_invalidateModel;
- (void)_updateModel;
- (void)_invalidateControllers;
- (void)_updateControllers;
- (void)_updateHUDText;

@end
