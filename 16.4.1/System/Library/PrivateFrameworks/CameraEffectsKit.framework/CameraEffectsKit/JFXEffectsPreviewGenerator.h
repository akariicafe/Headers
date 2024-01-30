@class NSString, PVRenderer, NSObject;
@protocol OS_dispatch_queue;

@interface JFXEffectsPreviewGenerator : NSObject {
    PVRenderer *_renderer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderCompleteQueue;
@property (retain, nonatomic) NSString *name;

- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)colorSpace;
- (void)trackStats:(BOOL)a0;
- (void)perfLog;
- (void)_renderJob:(id)a0 completionHandler:(id /* block */)a1;
- (void)generatePreviewRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithRendererOptions:(id)a0;

@end
