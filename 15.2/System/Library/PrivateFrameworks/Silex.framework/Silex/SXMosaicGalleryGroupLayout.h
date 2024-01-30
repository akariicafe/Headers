@class NSArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout, NSMutableArray;

@interface SXMosaicGalleryGroupLayout : NSObject

@property (readonly, nonatomic) NSArray *frames;
@property (readonly, nonatomic) NSMutableArray *columnRanges;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) SXMosaicGalleryCluster *cluster;
@property (readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout;
@property (readonly, nonatomic) unsigned long long numberOfColumns;

- (void).cxx_destruct;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForItem:(id)a0;
- (double)desiredHeightForItem:(id)a0;
- (double)calculateHeight;
- (id)calculateFrames;
- (id)initWithCluster:(id)a0 numberOfColumns:(unsigned long long)a1 columnLayout:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(unsigned long long)a0;

@end
