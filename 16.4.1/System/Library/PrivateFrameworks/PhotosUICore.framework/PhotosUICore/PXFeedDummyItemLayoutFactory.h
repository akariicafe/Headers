@class NSString;

@interface PXFeedDummyItemLayoutFactory : NSObject <PXFeedItemLayoutFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 viewModel:(id)a2 initialReferenceSize:(struct CGSize { double x0; double x1; })a3 thumbnailAsset:(out id *)a4;

@end
