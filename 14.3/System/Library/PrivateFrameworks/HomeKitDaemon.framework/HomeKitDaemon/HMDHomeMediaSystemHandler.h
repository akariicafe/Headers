@class HMDStereoPairDailyCountProvider, NSUUID, HMDHomeMediaSystemControllerMessageHandler, NSArray, NSString, HMFUnfairLock, HMFMessageDispatcher, NSMutableDictionary, NSObject, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDHomeMediaSystemHandlerDelegate;

@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDHomeMediaSystemMessageHandlerDelegate, NSSecureCoding, HMFLogging> {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_uuidToMediaSystems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<HMDHomeMediaSystemHandlerDelegate> delegate;
@property (retain) NSUUID *parentUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *messsageDispatcher;
@property (retain) NSNotificationCenter *notificationCenter;
@property (weak, nonatomic) HMDHome *home;
@property (retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler;
@property (readonly) HMDStereoPairDailyCountProvider *stereoPairDailyCountProvider;
@property (readonly, copy) NSArray *mediaSystems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (id)privateDescription;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (void)_handleAddMediaSystemModel:(id)a0 message:(id)a1;
- (void)_handleRemoveMediaSystemModel:(id)a0 message:(id)a1;
- (id)mediaSystemWithUUID:(id)a0;
- (id)initWithMediaSystems:(id)a0;
- (void)configure:(id)a0 delegate:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4;
- (id)backingStoreObjectsForVersion:(long long)a0;
- (void)_userAssistantAccessControlDidUpdate:(id)a0 accessories:(id)a1;
- (void)messageHandlerAddMediaSystem:(id)a0 configuredName:(id)a1 leftUUID:(id)a2 leftAccessoryUUID:(id)a3 rightUUID:(id)a4 rightAccessoryUUID:(id)a5 builderSession:(id)a6 completion:(id /* block */)a7;
- (void)messageHandlerRemoveMediaSystem:(id)a0 builderSession:(id)a1 completion:(id /* block */)a2;
- (void)messageHandlerUpdateMediaSystem:(id)a0 configuredName:(id)a1 leftUUID:(id)a2 leftAccessoryUUID:(id)a3 rightUUID:(id)a4 rightAccessoryUUID:(id)a5 builderSession:(id)a6 completion:(id /* block */)a7;
- (void)updateMediaSystem:(id)a0;
- (void)removeMediaSystem:(id)a0;
- (id)_currentMediaSystemIfPrimary;
- (id)mediaSystemForAccessory:(id)a0;
- (id)processedMediaSystemBuilderMessageFor:(id)a0;
- (void)updateMediaSystemWithMessage:(id)a0;
- (void)_handleUpdateMediaSystemModel:(id)a0 message:(id)a1;

@end
