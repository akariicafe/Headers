@class NSUUID, HMDHomeMediaSystemControllerMessageHandler, NSArray, NSString, NSMutableDictionary, HMDStereoPairSettingsController, HMFMessageDispatcher, NSObject, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDHomeMediaSystemHandlerDelegate, HMDHomeMediaSystemHandlerDataSource;

@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDStereoPairSettingsControllerDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, HMDMediaSystemDataSource, NSSecureCoding, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_uuidToMediaSystems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<HMDHomeMediaSystemHandlerDelegate> delegate;
@property (retain) NSUUID *parentUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (retain) NSNotificationCenter *notificationCenter;
@property (weak, nonatomic) HMDHome *home;
@property (retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler;
@property (retain, nonatomic) HMDStereoPairSettingsController *stereoPairSettingsController;
@property (readonly, copy) NSArray *mediaSystems;
@property (weak) id<HMDHomeMediaSystemHandlerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)mediaSystemForAccessory:(id)a0;
- (id)logIdentifier;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)eventStoreReadHandle;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)mediaSystemWithUUID:(id)a0;
- (void)addMediaSystem:(id)a0;
- (id)mediaSystemData:(id)a0 withIdentifier:(id)a1;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (id)_currentMediaSystemIfPrimary;
- (void)_handleAddMediaSystemModel:(id)a0 message:(id)a1;
- (void)_handleRemoveMediaSystemModel:(id)a0 message:(id)a1;
- (void)_handleUpdateMediaSystemModel:(id)a0 message:(id)a1;
- (void)_userAssistantAccessControlDidUpdate:(id)a0 accessories:(id)a1;
- (void)addMediaSystemWithGroupIdentifier:(id)a0 usingData:(id)a1;
- (void)addMediaSystemsWithIdentifiers:(id)a0 usingData:(id)a1;
- (id)backingStoreObjectsForVersion:(long long)a0;
- (void)configure:(id)a0 delegate:(id)a1 dataSource:(id)a2 queue:(id)a3 messageDispatcher:(id)a4 notificationCenter:(id)a5;
- (void)confirmPrimaryResidentIfFirstMediaSystem;
- (id)destinationForMediaSystem:(id)a0;
- (id)eventForwarder;
- (id)filteredMediaSystems;
- (void)handleRemovedMediaSystem:(id)a0;
- (id)identifiersInMediaSystemData:(id)a0;
- (id)initWithMediaSystems:(id)a0;
- (id)localAndRemoteSubscriptionProvider;
- (void)mergeMediaSystemData:(id)a0;
- (void)messageHandlerAddMediaSystem:(id)a0 configuredName:(id)a1 leftUUID:(id)a2 leftAccessoryUUID:(id)a3 rightUUID:(id)a4 rightAccessoryUUID:(id)a5 builderSession:(id)a6 completion:(id /* block */)a7;
- (void)messageHandlerRemoveMediaSystem:(id)a0 builderSession:(id)a1 message:(id)a2;
- (void)messageHandlerUpdateMediaSystem:(id)a0 configuredName:(id)a1 leftUUID:(id)a2 leftAccessoryUUID:(id)a3 rightUUID:(id)a4 rightAccessoryUUID:(id)a5 builderSession:(id)a6 completion:(id /* block */)a7;
- (void)notifyOfRemovedMediaSystem:(id)a0;
- (id)processedMediaSystemBuilderMessageFor:(id)a0;
- (void)removeMediaSystem:(id)a0;
- (void)routeMediaSystemWithMessage:(id)a0;
- (void)subscribeToSettingsForNewlyAddedMediaSystem:(id)a0;
- (void)unsubscribeToSettingsForMediaSystem:(id)a0;
- (void)updateMediaSystem:(id)a0;
- (id)uuidToMediaSystems;

@end
