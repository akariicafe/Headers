@class UINavigationController, NSArray, NSString, NSMutableArray;
@protocol SiriUINavigationTransitioning, UIViewControllerAnimatedTransitioning;

@interface SiriUIMultiNavigationTransitionController : NSObject <SiriUINavigationTransitioning>

@property (retain, nonatomic, getter=_mutableAdditionalCoordinationControllers) NSMutableArray *mutableAdditionalCoordinationControllers;
@property (weak, nonatomic, getter=_navigationController, setter=_setNavigationController:) UINavigationController *navigationController;
@property (readonly, nonatomic) id<SiriUINavigationTransitioning> primaryTransitionController;
@property (readonly, copy, nonatomic) NSArray *additionalCoordinationControllers;
@property (readonly, nonatomic) id<UIViewControllerAnimatedTransitioning> animationController;
@property (nonatomic) long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)interactionControllerForAnimationController:(id)a0;
- (void)addAdditionalCoordinationController:(id)a0;
- (void)configureWithNavigationController:(id)a0;
- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id)a0;
- (id)initWithPrimaryTransitionController:(id)a0;

@end
