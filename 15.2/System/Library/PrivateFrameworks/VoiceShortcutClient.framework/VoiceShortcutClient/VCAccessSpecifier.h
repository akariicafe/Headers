@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 sandboxCapabilities:(long long)a1;

- (BOOL)isRemovalService;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)isSpringBoard;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowShortcutImport;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessForContextualActions;
- (id)description;
- (BOOL)allowReadAccessForDonations;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowConnection;
- (BOOL)allowIntentsExtensionDiscovery;
- (void).cxx_destruct;
- (id)init;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSettingsApp;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (id)initWithBundleIdentifier:(id)a0 associatedAppBundleIdentifier:(id)a1 entitlements:(long long)a2 sandboxCapabilities:(long long)a3;

@end
