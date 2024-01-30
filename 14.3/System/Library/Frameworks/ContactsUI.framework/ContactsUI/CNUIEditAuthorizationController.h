@class UIViewController;
@protocol CNUIEditAuthorizationControllerDelegate;

@interface CNUIEditAuthorizationController : NSObject

@property (weak, nonatomic) id<CNUIEditAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id sender;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) UIViewController *guardedViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)presentAuthorizationUI;
- (void)userDidEnterPasswordCorrectly:(BOOL)a0;
- (void)lockoutRestrictionsPINControllerDidFinish:(id)a0;
- (void)didNotAuthorize;
- (void)didAutorize;

@end
