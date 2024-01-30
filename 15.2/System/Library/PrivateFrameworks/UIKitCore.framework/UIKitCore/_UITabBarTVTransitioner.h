@class NSString, UISpringTimingParameters, UIView;
@protocol UIViewControllerContextTransitioning;

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {
    BOOL _fromViewOriginalShouldRasterize;
    double _fromViewLayerOriginalRasterizationScale;
    BOOL _toViewOriginalShouldRasterize;
    double _toViewLayerOriginalRasterizationScale;
}

@property (retain, nonatomic) UISpringTimingParameters *slideTimingParameters;
@property (retain, nonatomic) UIView *toViewXFlippedScreenShot;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) BOOL transitionFromRight;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)interruptTabBarControllerTransition;
- (void).cxx_destruct;
- (void)finishTransition;
- (id)init;

@end
