@class NSString, WFComposeViewController;

@interface WFComposePresentingViewController : UIViewController <WFComposeViewControllerPresenter, UINavigationControllerDelegate>

@property (readonly, nonatomic) WFComposeViewController *composeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
