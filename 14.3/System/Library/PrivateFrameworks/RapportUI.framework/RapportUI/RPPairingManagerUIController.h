@class NSString, UIViewController, NSObject;
@protocol OS_dispatch_queue;

@interface RPPairingManagerUIController : NSObject

@property (nonatomic) BOOL allowManualIP;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL runInProcess;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)activate;
- (void)invalidate;

@end
