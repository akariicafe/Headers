@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long entitlements;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForXPCConnection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)isSettingsApp;
- (id)initWithBundleIdentifier:(id)a0 associatedAppBundleIdentifier:(id)a1 entitlements:(long long)a2;
- (BOOL)allowConnection;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)isRemovalService;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)isSpringBoard;

@end
