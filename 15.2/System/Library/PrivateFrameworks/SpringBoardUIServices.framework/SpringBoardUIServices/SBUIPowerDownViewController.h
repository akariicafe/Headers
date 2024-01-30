@class NSString;
@protocol SBUIPowerDownViewControllerDelegate;

@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPowerDownViewControllerDelegate> powerDownDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)powerDownViewAnimateOutCompleted:(id)a0;
- (void)powerDownViewWillAnimateIn:(id)a0;
- (void)powerDownViewWillAnimateOut:(id)a0;
- (void)powerDownViewRequestPowerDown:(id)a0;
- (void)powerDownViewRequestCancel:(id)a0;
- (id)_powerDownView;
- (void)showPowerDownFindMyAlert;
- (void)showPowerDownFindMyAlertWithProceed:(id /* block */)a0 cancelCompletion:(id /* block */)a1;

@end
