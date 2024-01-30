@class NSIndexSet, NSMutableIndexSet, NSDate;
@protocol PXDisplayAsset, PXGDisplayAssetPixelBufferSource;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject {
    NSMutableIndexSet *_textureRequestIDs;
}

@property (readonly, nonatomic) id<PXGDisplayAssetPixelBufferSource> pixelBufferSource;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, copy, nonatomic) NSIndexSet *textureRequestIDs;
@property (copy, nonatomic) NSDate *firstPixelBufferDisplayDate;
@property (retain, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;

- (void)removeTextureRequestIDs:(id)a0;
- (void)addTextureRequestID:(int)a0;
- (id)initWithPixelBufferSource:(id)a0 displayAsset:(id)a1;
- (void)removeTextureRequestID:(int)a0;
- (void).cxx_destruct;

@end
