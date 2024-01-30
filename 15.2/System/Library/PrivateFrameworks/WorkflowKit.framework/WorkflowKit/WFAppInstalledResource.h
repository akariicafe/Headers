@class NSString, INAppDescriptor, WFiTunesSessionManager, NSObject;
@protocol OS_dispatch_queue, WFAppInstalledResourceDelegate;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>

@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL skipLookup;
@property (nonatomic) BOOL requiresAppToBeInstalled;
@property (nonatomic) BOOL intentIsSynced;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) INAppDescriptor *descriptor;
@property (weak, nonatomic) id<WFAppInstalledResourceDelegate> delegate;

+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (id)eventDictionary;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)refreshAvailability;
- (id)intentDescriptor;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (id)initWithAppDescriptor:(id)a0 requiresAppToBeInstalled:(BOOL)a1;
- (id)initWithIntentDescriptor:(id)a0 isSyncedFromOtherDevice:(BOOL)a1;
- (id)_initWithDescriptor:(id)a0 requiresAppToBeInstalled:(BOOL)a1 isSyncedFromOtherDevice:(BOOL)a2;
- (void)updateDescriptorsWithSelectedApp:(id)a0;
- (void)notifyDelegateWithUpdatedDescriptor:(id)a0;
- (BOOL)descriptorIsIntentDescriptor;
- (BOOL)intentIsEligibleForRemoteExecution;
- (BOOL)intentIsLocallyAvailable;
- (id)appNotInstalledError;
- (id)appNotResolvedError;
- (id)appNeedsUpdateErrorWithAppName:(id)a0;

@end
