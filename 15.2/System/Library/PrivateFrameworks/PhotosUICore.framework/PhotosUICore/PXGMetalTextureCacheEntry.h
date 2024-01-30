@class NSDate;
@protocol MTLTexture;

@interface PXGMetalTextureCacheEntry : NSObject

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) NSDate *time;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;

@end
