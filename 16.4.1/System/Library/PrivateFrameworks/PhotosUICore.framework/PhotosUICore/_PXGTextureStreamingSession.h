@class NSIndexSet, NSMutableIndexSet, PXGDisplayAssetVideoPresentationController, NSDate;
@protocol PXDisplayAsset, PXGDisplayAssetAdjustment, PXGDisplayAssetPixelBufferSource;

@interface _PXGTextureStreamingSession : NSObject {
    NSMutableIndexSet *_textureRequestIDs;
}

@property (readonly, nonatomic) PXGDisplayAssetVideoPresentationController *presentationController;
@property (readonly, nonatomic) id<PXGDisplayAssetPixelBufferSource> pixelBufferSource;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> displayAdjustment;
@property (readonly, copy, nonatomic) NSIndexSet *textureRequestIDs;
@property (copy, nonatomic) NSDate *firstPixelBufferDisplayDate;
@property (retain, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;

- (void).cxx_destruct;
- (void)addTextureRequestID:(int)a0;
- (id)initWithDisplayAsset:(id)a0 presentationController:(id)a1 pixelBufferSource:(id)a2 adjustment:(id)a3;
- (void)removeTextureRequestID:(int)a0;
- (void)removeTextureRequestIDs:(id)a0;

@end
