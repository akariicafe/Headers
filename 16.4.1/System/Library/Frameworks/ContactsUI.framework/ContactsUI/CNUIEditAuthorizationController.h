@class UIViewController;
@protocol CNUIEditAuthorizationControllerDelegate;

@interface CNUIEditAuthorizationController : NSObject

@property (weak, nonatomic) id<CNUIEditAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id sender;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) UIViewController *guardedViewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didNotAuthorize;
- (void)didAutorize;
- (void)lockoutRestrictionsPINControllerDidFinish:(id)a0;
- (void)presentAuthorizationUI;
- (void)userDidEnterPasswordCorrectly:(BOOL)a0;

@end
