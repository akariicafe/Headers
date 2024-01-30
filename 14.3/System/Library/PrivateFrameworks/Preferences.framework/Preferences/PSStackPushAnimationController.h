@class UINavigationController, NSArray, NSString, NSMutableArray;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    BOOL _hasStartedAnimation;
}

@property (retain, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long animationPreset;
@property (nonatomic) double startStagger;
@property (nonatomic) double completionStagger;
@property (nonatomic) double pushDuration;
@property (nonatomic) double springDamping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithViewControllerStack:(id)a0 navigationController:(id)a1;
+ (id)_snapshotOfViewController:(id)a0 withNavigationBar:(id)a1 prevViewController:(id)a2;
+ (id)_animationParametersForPreset:(long long)a0;
+ (void)setDefaultAnimationPreset:(long long)a0;
+ (void)resetDefaultAnimationParameters;

- (void)animationEnded:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateAlongsideToViewController:(id /* block */)a0;
- (BOOL)_shouldSkipFirstPush;
- (double)_desiredDuration;
- (double)_actualDuration;
- (void)_loadDefaultValues;
- (void)_addAnimation:(id /* block */)a0 forViewAtIndex:(unsigned long long)a1 count:(unsigned long long)a2;
- (id)_valueForAnimationParameter:(id)a0;

@end
