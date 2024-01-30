@class TSKAnimatedGIFController;

@interface TSKAnimatedGIFLayer : CALayer {
    TSKAnimatedGIFController *mController;
}

@property (weak, nonatomic) TSKAnimatedGIFController *controller;

+ (id)defaultActionForKey:(id)a0;

- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)display;

@end
