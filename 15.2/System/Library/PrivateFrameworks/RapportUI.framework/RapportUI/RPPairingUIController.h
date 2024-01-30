@class UIViewController, NSObject;
@protocol OS_dispatch_queue;

@interface RPPairingUIController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ retryHandler;
@property (copy, nonatomic) id /* block */ tryPINHandler;

- (void)_cleanup;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)pairingError:(id)a0;
- (void)promptWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;

@end
