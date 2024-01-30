@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 sandboxCapabilities:(long long)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForCurrentConnection;

- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowWriteAccessForTriggers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowRunningTestHarnessTests;
- (void)dealloc;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)isSpringBoard;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)isSettingsApp;
- (id)bundleIdentifierFromTask;
- (id)init;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowReadAccessForSleepWorkflows;
- (id)description;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowConnection;
- (BOOL)isRemovalService;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)hasEntitlements:(long long)a0;
- (void).cxx_destruct;
- (id)initWithSecTask:(struct __SecTask { } *)a0 bundleIdentifier:(id)a1 associatedAppBundleIdentifier:(id)a2 entitlements:(long long)a3 sandboxCapabilities:(long long)a4;
- (BOOL)allowLaunchingBackgroundShortcutRunner;
- (BOOL)allowReadAccessForDonations;

@end
