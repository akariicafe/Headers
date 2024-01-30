@class NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck;
@property (readonly, nonatomic) BOOL skipThinningCheck;
@property (readonly, nonatomic) BOOL allowPatchWithoutSinf;
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) BOOL isSharediPad;
@property (readonly, nonatomic) NSURL *journalStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserJournalStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) unsigned long long estimatedAvailableMemoryForValidation;
@property (nonatomic) BOOL haveUpdatedAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) NSURL *currentUserDataDirectory;
@property (nonatomic, getter=wasErroneousContainerCleanupDone) BOOL erroneousContainerCleanupDone;

+ (id)sharedInstance;

- (id)initForTesting;
- (id)builtInApplicationBundleIDs;
- (id)init;
- (void).cxx_destruct;

@end
