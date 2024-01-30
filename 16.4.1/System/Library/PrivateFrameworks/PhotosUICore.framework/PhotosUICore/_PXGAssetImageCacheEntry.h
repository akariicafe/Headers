@class NSMutableIndexSet;
@protocol PXDisplayAsset;

@interface _PXGAssetImageCacheEntry : NSObject

@property (readonly, nonatomic) NSMutableIndexSet *requestIDs;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGImage { } *cgImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) unsigned int imageOrientation;
@property (nonatomic) BOOL isDegraded;

- (void)prepareForReuse;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
