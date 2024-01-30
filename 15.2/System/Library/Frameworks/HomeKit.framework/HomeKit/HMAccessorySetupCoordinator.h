@class NSUUID, NSString, _HMContext, NSObject;
@protocol OS_dispatch_queue;

@interface HMAccessorySetupCoordinator : NSObject <HMFLogging, HMFMessageReceiver> {
    _HMContext *_context;
}

@property (class, getter=isCHIPFeatureEnabled) BOOL CHIPFeatureEnabled;
@property (class, readonly, copy) NSUUID *UUID;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isCHIPSetupPayloadURL:(id)a0;
+ (BOOL)isHAPSetupPayloadURL:(id)a0;
+ (id)setupPayloadURLFromSetupPayloadURLString:(id)a0;
+ (BOOL)isSetupPayloadURLString:(id)a0;
+ (BOOL)isSetupPayloadURL:(id)a0;
+ (id)communicationProtocolForSetupPayloadURLString:(id)a0;

- (void)configure;
- (void)cancelStagedCHIPAccessoryPairingWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0;
- (void)createSetupAccessoryPayloadWithSetupPayloadURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)createCHIPSetupPayloadStringForStagedPairingWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)stageCHIPAccessoryPairingWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)createSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSetupAccessoryPayloadWithCHIPDecimalStringRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSetupAccessoryPayloadWithCHIPSetupCode:(id)a0 completionHandler:(id /* block */)a1;

@end
