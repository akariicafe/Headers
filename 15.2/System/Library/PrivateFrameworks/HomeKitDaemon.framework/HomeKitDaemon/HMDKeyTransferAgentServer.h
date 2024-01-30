@class HMFExponentialBackoffTimer, NSUUID, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_group;

@interface HMDKeyTransferAgentServer : HMDKeyTransferAgent <HMFTimerDelegate>

@property (class, readonly, getter=isPeerAvailable) BOOL peerAvailable;

@property (retain, nonatomic) NSUUID *currentKeyUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *broadcastGroup;
@property (retain, nonatomic) NSMutableSet *broadcastNotifiedDevices;
@property (retain, nonatomic) HMFExponentialBackoffTimer *broadcastUUIDTimer;
@property (nonatomic) BOOL broadcastFailure;
@property (copy, nonatomic) id /* block */ finalCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginPairingWithCompletionHandler:(id /* block */)a0;
- (void)resetConfig;
- (void)_device:(id)a0 addedToAccount:(id)a1;
- (void)__deviceAddedToAccount:(id)a0;
- (void)__deviceUpdated:(id)a0;
- (void)_device:(id)a0 removedFromAccount:(id)a1;
- (void)__deviceRemovedFromAccount:(id)a0;
- (void)_handleKeyTransferAgentMessage:(id)a0;
- (BOOL)_startAdvertiseUUIDWithError:(id *)a0;
- (BOOL)_endAdvertiseUUIDWithError:(id *)a0;
- (void)__resetTimer:(id)a0;
- (id)_httpMessageTransport;
- (void)_endPairingWithError:(id)a0;

@end
