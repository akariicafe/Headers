@class UIImageView, PKDynamicLayerEmitterConfiguration, CAEmitterLayer;

@interface PKDynamicContentView : UIView {
    UIImageView *_imageView;
    PKDynamicLayerEmitterConfiguration *_dynamicLayerEmitterConfiguration;
    CAEmitterLayer *_emitterLayer;
    BOOL _paused;
}

@property (nonatomic, getter=isPaused) BOOL paused;

- (void)_pauseEmitters;
- (void)_startEmitters;
- (void)_configureEmitterLayerWithImage:(id)a0;
- (id)initWithImage:(id)a0 emitterImage:(id)a1 dynamicLayerEmitterConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidate;

@end
