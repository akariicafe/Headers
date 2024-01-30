@class HMMediaSession, HMSymptomsHandler, HMAccessorySettings, HMHome, NSObject, HMAccessoryCategory, HMMediaDestination, HMMutableArray, NSString, HMApplicationData, HMFUnfairLock, NSArray, _HMContext, NSUUID;
@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *componentsArray;
@property (retain, nonatomic) HMApplicationData *applicationData;
@property (retain) HMMediaDestination *audioDestination;
@property (weak) id<HMMediaSystemDelegate> delegate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic, getter=isCompatible) BOOL compatible;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly) long long audioDestinationType;
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly, weak) HMHome *containerHome;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)a0 home:(id)a1;

- (void)_updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)callCompletionHandler:(id /* block */)a0 error:(id)a1;
- (void)callCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHome:(id)a0 uuid:(id)a1 name:(id)a2 configuredName:(id)a3 compatible:(BOOL)a4 components:(id)a5 settings:(id)a6 symptomHandler:(id)a7;
- (void)_handleRootSettingsUpdated:(id)a0;
- (void)_handleSystemUpdatedNotification:(id)a0;
- (void)notifyDelegateOfUpdatedName:(id)a0;
- (void)notifyDelegateOfUpdatedSettings:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1 includeSettingsAndAppData:(BOOL)a2;
- (void)notifyDelegateOfUpdatedComponents:(id)a0;
- (void)setConfiguredName:(id)a0;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)a0;
- (void)notifyDelegateOfUpdatedApplicationData:(id)a0;
- (void)notifyDelegateOfUpdatedAudioDestination;
- (void)notifyDelegateOfUpdatedMediaSession:(id)a0;
- (void)_updateAccessoryReference;
- (void)updateMediaSession:(id)a0 forMediaProfile:(id)a1;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (id)logIdentifier;
- (void)setSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
