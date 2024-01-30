@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (retain, nonatomic) CALayer *materialsLayer;
@property (retain, nonatomic) CALayer *pagesLayer;
@property (retain, nonatomic) CALayer *page1Layer;
@property (retain, nonatomic, setter=_setTimerToNextState:) NSTimer *timerToNextState;
@property (retain, nonatomic) UILabel *debugLabel;

- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_updateMaterials;
- (double)_durationForState:(unsigned long long)a0;
- (unsigned long long)_stateFollowingState:(unsigned long long)a0;

@end
