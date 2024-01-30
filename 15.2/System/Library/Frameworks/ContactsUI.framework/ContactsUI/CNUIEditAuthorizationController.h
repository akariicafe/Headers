@class UIViewController;
@protocol CNUIEditAuthorizationControllerDelegate;

@interface CNUIEditAuthorizationController : NSObject

@property (weak, nonatomic) id<CNUIEditAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id sender;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) UIViewController *guardedViewController;

- (void)presentAuthorizationUI;
- (void)didNotAuthorize;
- (void)lockoutRestrictionsPINControllerDidFinish:(id)a0;
- (void)userDidEnterPasswordCorrectly:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAutorize;

@end
