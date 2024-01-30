@class NSString, NSArray, UIView, WFComposeViewController;
@protocol WFModuleDelegate;

@interface WFComposePresentingViewController : UIViewController <WFComposeViewControllerPresenter, WFDragCoordinator>

@property (readonly, nonatomic) WFComposeViewController *composeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) NSArray *participatingViewControllers;
@property (readonly, nonatomic) NSArray *scrollViewsAffectingDrag;
@property (readonly, nonatomic) id<WFModuleDelegate> moduleDelegate;

@end
