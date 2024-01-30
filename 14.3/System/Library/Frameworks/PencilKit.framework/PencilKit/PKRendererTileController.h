@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererTileController : NSObject {
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)framebufferForTile:(id)a0 createIfNeeded:(BOOL)a1 device:(id)a2 pixelFormat:(unsigned long long)a3 clearFramebufferBlock:(id /* block */)a4;
- (void)didTeardownTile:(id)a0;

@end
