@class GCController, GCControllerView;

@interface GCVirtualController : NSObject {
    GCControllerView *_controllerView;
}

@property (readonly, weak, nonatomic) GCController *controller;

+ (id)virtualControllerWithConfiguration:(id)a0;

- (void)disconnect;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)findKeyWindow;
- (void)refreshViewForKeyWindow;
- (void)connectWithReplyHandler:(id /* block */)a0;
- (void)updateConfigurationForElement:(id)a0 configuration:(id /* block */)a1;

@end
