@class PKMetalRendererController, NSObject;
@protocol OS_dispatch_queue;

@interface PKTileController : NSObject {
    BOOL _invertColors;
    BOOL _sixChannelBlending;
    BOOL _previewsSuspended;
    PKMetalRendererController *_rendererController;
    NSObject<OS_dispatch_queue> *_previewQueue;
}

- (void).cxx_destruct;

@end
