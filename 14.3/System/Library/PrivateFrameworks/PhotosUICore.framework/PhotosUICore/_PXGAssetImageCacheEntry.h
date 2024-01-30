@class NSMutableIndexSet;
@protocol PXDisplayAsset;

@interface _PXGAssetImageCacheEntry : NSObject

@property (readonly, nonatomic) NSMutableIndexSet *requestIDs;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic) struct CGImage { } *image;
@property (nonatomic) unsigned int imageOrientation;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;

@end
