@class NSString, PVRenderer;

@interface JFXEffectsPreviewGenerator : NSObject {
    PVRenderer *_renderer;
}

@property (retain, nonatomic) NSString *name;

- (void)clearCaches;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)perfLog;
- (id)initWithRendererOptions:(id)a0;
- (void)generatePreviewRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)trackStats:(BOOL)a0;
- (void)_renderJob:(id)a0 completionHandler:(id /* block */)a1;

@end
