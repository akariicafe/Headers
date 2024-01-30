@class UIViewController, NSObject;
@protocol OS_dispatch_queue;

@interface RPPairingUIController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ retryHandler;
@property (copy, nonatomic) id /* block */ tryPINHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)activate;
- (void)invalidate;
- (void)pairingError:(id)a0;
- (void)promptWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;

@end
