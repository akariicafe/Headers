@class UIViewSpringAnimationBehavior;

@interface _UISpringAnimationPrototypeSettings : PTSettings {
    UIViewSpringAnimationBehavior *_springAnimationBehavior;
}

@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (id)springAnimationBehavior;

@end
