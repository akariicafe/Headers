@protocol UITimingCurveProvider;

@interface JFXCompositionPlayerViewControllerAnimationProperties : NSObject

@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL shouldScale;
@property (retain, nonatomic) id<UITimingCurveProvider> timingParameters;

- (void).cxx_destruct;

@end
