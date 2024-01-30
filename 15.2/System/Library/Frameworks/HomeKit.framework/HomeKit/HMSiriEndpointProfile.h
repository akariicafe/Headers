@class NSUUID, NSString, NSArray, HMSiriEndpointProfileAssistant, NSNumber;
@protocol HMSiriEndpointProfileDelegate;

@interface HMSiriEndpointProfile : HMAccessoryProfile <_HMSiriEndpointProfileDelegate, HMFLogging, HMFObject>

@property (readonly) unsigned long long capability;
@property (readonly) NSNumber *activeIdentifier;
@property (readonly) long long sessionState;
@property (readonly, copy) NSUUID *sessionHubIdentifer;
@property (readonly) NSString *siriEndpointVersion;
@property (readonly, getter=isNeedsOnboarding) BOOL needsOnboarding;
@property (readonly) BOOL supportsOnboarding;
@property (readonly) NSString *capabilityToString;
@property (readonly) NSString *siriEngineVersion;
@property (readonly) BOOL manuallyDisabled;
@property (readonly) long long multifunctionButton;
@property (readonly) NSArray *assistants;
@property (readonly) HMSiriEndpointProfileAssistant *currentAssistant;
@property (weak) id<HMSiriEndpointProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)siriEndpointProfile;
- (void)applyOnboardingSelections:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)a0;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)setNotifications:(BOOL)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)siriEndpointProfile:(id)a0 didUpdateSessionState:(long long)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateSessionHubIdentifier:(id)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateNeedsOnboarding:(BOOL)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateSupportsOnboarding:(BOOL)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateSiriEngineVersion:(id)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateActiveIdentifier:(id)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateAssistants:(id)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateManuallyDisabled:(BOOL)a1;
- (void)siriEndpointProfile:(id)a0 didUpdateMultifunctionButton:(long long)a1;
- (id)initWithSiriEndpointProfile:(id)a0;
- (BOOL)supportsOnBoarding;

@end
