@class UINavigationController, NSString, PSEnrollmentNavigationController, UIViewController;
@protocol PSUIFaceIDEnrollmentCoordinatorDelegate;

@interface PSUIFaceIDEnrollmentCoordinator : NSObject <BKUIPearlEnrollControllerDelegate, PSEnrollmentNavigationControllerDismissalDelegate>

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) PSEnrollmentNavigationController *_presentedViewController;
@property (readonly, nonatomic) UINavigationController *presentedViewController;
@property (readonly, nonatomic) unsigned long long configuration;
@property (weak, nonatomic) id<PSUIFaceIDEnrollmentCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)enrollmentNavigationControllerDidDismiss:(id)a0;
- (void)enrollmentNavigationControllerWillDismiss:(id)a0;
- (id)initWithPresentingViewController:(id)a0 configuration:(unsigned long long)a1;
- (void)preloadAndCreateEnrollmentControllerWithPasscode:(id)a0 completion:(id /* block */)a1;
- (void)startWithPasscode:(id)a0;

@end
