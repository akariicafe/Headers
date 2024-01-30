@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout

@property (readonly, nonatomic) double largeItemHeight;
@property (readonly, nonatomic) double smallItemHeight;

- (double)calculateHeight;
- (id)calculateFrames;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForItem:(id)a0;
- (id)initWithCluster:(id)a0 numberOfColumns:(unsigned long long)a1 columnLayout:(id)a2;

@end
