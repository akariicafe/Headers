@class NSString;

@interface PXStoryMemoryFeedItemLayoutFactory : NSObject <PXFeedItemLayoutFactory>

@property (nonatomic) long long layoutKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectTapToRadarDiagnosticsForItemLayout:(id)a0 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 intoContainer:(id)a2;
- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 viewModel:(id)a2 initialReferenceSize:(struct CGSize { double x0; double x1; })a3 thumbnailAsset:(out id *)a4;
- (id)itemPlacementControllerForItemReference:(id)a0 itemLayout:(id)a1;
- (void)setItemLayout:(id)a0 isHovered:(BOOL)a1;
- (void)setItemLayout:(id)a0 isTouched:(BOOL)a1;
- (void)setItemLayout:(id)a0 shouldAutoplayContent:(BOOL)a1 videoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)shouldReloadItemLayout:(id)a0 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDataSource:(id)a2 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 inDataSource:(id)a4;

@end
