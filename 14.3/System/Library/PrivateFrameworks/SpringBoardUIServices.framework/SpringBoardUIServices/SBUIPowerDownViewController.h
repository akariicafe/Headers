@class NSString;
@protocol SBUIPowerDownViewControllerDelegate;

@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPowerDownViewControllerDelegate> powerDownDelegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)powerDownViewAnimateOutCompleted:(id)a0;
- (void)powerDownViewWillAnimateIn:(id)a0;
- (void)powerDownViewWillAnimateOut:(id)a0;
- (void)powerDownViewRequestPowerDown:(id)a0;
- (void)powerDownViewRequestCancel:(id)a0;
- (id)_powerDownView;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
