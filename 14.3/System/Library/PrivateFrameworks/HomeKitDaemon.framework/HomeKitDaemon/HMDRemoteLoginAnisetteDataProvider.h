@class NSString, HMDRemoteLoginMessageSender;

@interface HMDRemoteLoginAnisetteDataProvider : HMFObject <AKAnisetteServiceProtocol, HMFLogging>

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 remoteMessageSender:(id)a1;

@end
