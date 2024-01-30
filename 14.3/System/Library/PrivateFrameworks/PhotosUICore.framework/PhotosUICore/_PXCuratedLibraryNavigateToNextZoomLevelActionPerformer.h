@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) PXGSpriteReference *hitSpriteReference;

- (id)initWithActionType:(id)a0 viewModel:(id)a1 layout:(id)a2 hitSpriteReference:(id)a3;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;

@end
