@class NSString, PVRenderer, NSObject;
@protocol OS_dispatch_queue;

@interface JFXEffectsPreviewGenerator : NSObject {
    PVRenderer *_renderer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderCompleteQueue;
@property (retain, nonatomic) NSString *name;

- (void)clearCaches;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)perfLog;
- (id)initWithRendererOptions:(id)a0;
- (void)generatePreviewRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)trackStats:(BOOL)a0;
- (void)_renderJob:(id)a0 completionHandler:(id /* block */)a1;

@end
