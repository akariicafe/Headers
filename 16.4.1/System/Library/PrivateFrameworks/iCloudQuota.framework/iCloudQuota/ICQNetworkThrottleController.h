@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (id)init;
- (BOOL)requestShouldThrottle:(id)a0;
- (void).cxx_destruct;

@end
