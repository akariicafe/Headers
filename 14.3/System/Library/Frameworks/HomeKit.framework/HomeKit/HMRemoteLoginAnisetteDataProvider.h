@class NSUUID, HMFMessageDispatcher, NSString, NSObject, HMDelegateCaller;
@protocol OS_dispatch_queue;

@interface HMRemoteLoginAnisetteDataProvider : NSObject <HMFMessageReceiver, AKAnisetteServiceProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMDelegateCaller *delegateCaller;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (void)_configureClientQueue:(id)a0 delegateCaller:(id)a1 msgDispatcher:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
