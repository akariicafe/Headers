@class NSUUID, NSString, NSArray, NSNumber, HMSiriEndpointProfilesMessenger;
@protocol _HMSiriEndpointProfileDelegate;

@interface _HMSiriEndpointProfile : _HMAccessoryProfile <HMFLogging, HMFObject>

@property (retain) HMSiriEndpointProfilesMessenger *messenger;
@property (weak) id<_HMSiriEndpointProfileDelegate> delegate;
@property long long sessionState;
@property (retain) NSUUID *sessionHubIdentifer;
@property (retain) NSString *siriEndpointVersion;
@property (nonatomic) unsigned long long capability;
@property (retain) NSString *siriEngineVersion;
@property (retain) NSNumber *activeIdentifier;
@property (nonatomic) BOOL manuallyDisabled;
@property long long multifunctionButton;
@property (retain) NSArray *assistants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)applyOnboardingSelections:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)a0;
- (void)notifyClientDidUpdateSessionState;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)_handleUpdateProfileState:(id)a0;
- (void)setNotifications:(BOOL)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_mergeAssistants:(id)a0 operations:(id)a1;

@end
