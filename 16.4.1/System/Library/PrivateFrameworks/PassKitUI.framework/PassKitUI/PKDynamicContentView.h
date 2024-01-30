@class UIImageView, PKDynamicLayerEmitterConfiguration, CAEmitterLayer;

@interface PKDynamicContentView : UIView {
    UIImageView *_imageView;
    PKDynamicLayerEmitterConfiguration *_dynamicLayerEmitterConfiguration;
    CAEmitterLayer *_emitterLayer;
    BOOL _paused;
}

@property (nonatomic, getter=isPaused) BOOL paused;

- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_configureEmitterLayerWithImage:(id)a0;
- (void)_pauseEmitters;
- (void)_startEmitters;
- (id)initWithImage:(id)a0 emitterImage:(id)a1 dynamicLayerEmitterConfiguration:(id)a2;

@end
