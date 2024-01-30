@class NSUUID, NSString, HMAccessory, NSObject, _HMContext, ACAccount, HMRemoteLoginAnisetteDataProvider, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NSString *currentSessionID;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, nonatomic) ACAccount *loggedInAccount;
@property (readonly, nonatomic, getter=isSessionInProgress) BOOL sessionInProgress;
@property (readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

- (void)_configureWithContext:(id)a0;
- (id)init;
- (void)_signout:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)signout:(id /* block */)a0;
- (void)updateLoggedInAccount:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_handleRemoteLoginAccountUpdated:(id)a0;
- (void)setLoggedInAccount:(id)a0;
- (void)_callAccountUpdateDelegate:(id)a0;
- (void)_companionLoginWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_handleLoginResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_queryProxiedDevice:(id /* block */)a0;
- (void)_handleQueryProxiedDeviceResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_proxyLoginWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_handleRemoteLoginSignoutResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)companionLoginWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)queryProxiedDevice:(id /* block */)a0;
- (void)proxyLoginWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (void)encodeWithCoder:(id)a0;

@end
