@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate>

@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkListAvailable:(id)a0 list:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)networkSelected:(id)a0 success:(BOOL)a1 mode:(id)a2;
- (void)performDelegateSelector:(SEL)a0;
- (void)fetchNetworkList;
- (void)selectNetwork:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)copyNetworkSelectionInfo;
- (void)automaticallySelectNetworkWithCompletion:(id /* block */)a0;
- (void)selectNetwork:(id)a0 completion:(id /* block */)a1;
- (void)fetchNetworkListWithCompletion:(id /* block */)a0;
- (void)networksWithCompletionHandler:(id /* block */)a0;
- (void)automaticallySelectNetwork;

@end
