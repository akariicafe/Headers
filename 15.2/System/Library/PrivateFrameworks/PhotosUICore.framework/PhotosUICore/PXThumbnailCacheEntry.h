@class NSData, NSManagedObjectID;

@interface PXThumbnailCacheEntry : NSObject

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) struct PHAssetResourceTableDataSpecification { int width; int height; int bytesPerRow; int dataWidth; int dataHeight; int imageDataOffset; long long kind; } dataSpec;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 dataSpec:(const struct PHAssetResourceTableDataSpecification { int x0; int x1; int x2; int x3; int x4; int x5; long long x6; } *)a1 data:(id)a2;

@end
