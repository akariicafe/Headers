@class NSString, AVTAvatarAttributeEditorSection, AVTUIEnvironment, AVTTransitionCoordinator;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTIndexBasedTaskScheduler, AVTTaskScheduler;

@interface AVTAvatarAttributeEditorSectionController : NSObject <AVTAvatarAttributeEditorSectionController>

@property (class, readonly, nonatomic) BOOL supportsSelection;

@property (retain, nonatomic) AVTAvatarAttributeEditorSection *section;
@property (retain, nonatomic) AVTTransitionCoordinator *transitionCoordinator;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTIndexBasedTaskScheduler> thumbnailScheduler;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeForSectionItem:(id)a0 inSection:(id)a1 fittingWidth:(double)a2 environment:(id)a3;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForSection:(id)a0 fittingWidth:(double)a1 environment:(id)a2;
+ (double)edgeLengthFittingWidth:(double)a0 environment:(id)a1;
+ (double)maxLabelHeightInSection:(id)a0 fittingWidth:(double)a1;
+ (double)requiredLabelSpaceForMaxLabelHeight:(double)a0 cellEdgeLength:(double)a1 sectionItemHeightRatio:(double)a2;
+ (BOOL)shouldHideLabelBackgroundInSection:(id)a0 fittingWidth:(double)a1;

- (long long)numberOfItems;
- (void).cxx_destruct;
- (unsigned long long)indexForItem:(id)a0;
- (void)resetToDefaultState;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)prefetchingSectionItemForIndex:(long long)a0;
- (void)attributeSection:(id)a0 didChangeValueForSectionItem:(id)a1;
- (void)cell:(id)a0 willDisplayAtIndex:(long long)a1;
- (void)didHighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (void)didSelectItemAtIndex:(long long)a0 cell:(id)a1;
- (void)didUnhighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)evaluateDisplayCondition:(id)a0;
- (id)initWithThumbnailScheduler:(id)a0 renderingScheduler:(id)a1 environment:(id)a2;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFocusingItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCell:(id)a0 forItemAtIndex:(long long)a1;
- (void)updateWithSection:(id)a0;
- (id)viewForIndex:(long long)a0;

@end
