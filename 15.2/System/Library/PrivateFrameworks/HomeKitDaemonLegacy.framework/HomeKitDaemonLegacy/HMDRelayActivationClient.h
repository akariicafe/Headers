@class NSString, HMDAccessory, NSObject;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *challengeIdentifier;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)close;
- (void)open;
- (void)_closeWithError:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (void)requestChallenge;
- (void)requestCertificateWithPublicKey:(id)a0 challengeCertificate:(id)a1 challengeResponse:(id)a2;

@end
