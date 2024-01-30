@class NSObject;
@protocol AMSBagProtocol, OS_dispatch_queue;

@interface AMSDeviceIdentityCertificateTask : AMSTask

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (id)performDeviceIdentityRequestForAbsinthe;
- (id)performDeviceIdentityRequestForFraudReport;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)a0 ttlBagKey:(id)a1 logInformation:(id)a2;

@end
