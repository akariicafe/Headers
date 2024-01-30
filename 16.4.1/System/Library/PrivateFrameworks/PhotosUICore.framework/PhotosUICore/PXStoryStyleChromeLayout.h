@class NSString, PXStoryViewModel, NSIndexSet, NSAttributedString;
@protocol PXStoryColorGradingRepository, PXStoryViewLayoutSpec, PXStoryStyleDescriptor;

@interface PXStoryStyleChromeLayout : PXGLayout <PXGStringSource, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _songArtworkSpriteIndex;
    unsigned int _songTitleSpriteIndex;
    unsigned int _songTitleAccessorySpriteIndex;
    unsigned int _songSubtitleSpriteIndex;
    unsigned int _colorGradeNameSpriteIndex;
    unsigned int _filterButtonSpriteIndex;
    unsigned int _musicButtonSpriteIndex;
    unsigned int _customLabelSpriteIndex;
    unsigned int _spriteCount;
    NSIndexSet *_axSpriteIndexes;
}

@property (nonatomic) unsigned short mediaVersion;
@property (readonly, nonatomic) NSAttributedString *titleAttributedString;
@property (readonly, nonatomic) NSAttributedString *titleAccessoryAttributedString;
@property (readonly, nonatomic) NSAttributedString *subtitleAttributedString;
@property (readonly, nonatomic) NSAttributedString *colorGradeNameAttributedString;
@property (readonly, nonatomic) id musicFeedbackContextMenuDelegate;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) id<PXStoryStyleDescriptor> styleInfo;
@property (retain, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;
@property (retain, nonatomic) id<PXStoryColorGradingRepository> colorGradingRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startCachingResourcesForStyleInfo:(id)a0 viewLayoutSpec:(id)a1 displayScale:(double)a2;
+ (void)stopCachingResourcesForStyleInfo:(id)a0 viewLayoutSpec:(id)a1 displayScale:(double)a2;

- (void)alphaDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)didUpdate;
- (id)initWithViewModel:(id)a0;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axSpriteIndexes;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axVisibleSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateContent;
- (void)update;
- (void)_updateContent;
- (id)init;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (BOOL)canHandleVisibleRectRejection;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)screenScaleDidChange;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (id)_styleSongAsset;
- (id)_actionPerformer;
- (void)_handleFilterButton:(id)a0;
- (void)_handleMusicButton:(id)a0;
- (void)_invalidateStrings;

@end
