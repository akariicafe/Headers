@class NSNumber, NSString, ISSoftwareApplication;

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}

@property (readonly) NSNumber *adamID;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleShortVersionString;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSNumber *dsID;
@property (readonly) NSNumber *ratingRank;
@property (readonly) NSString *ratingSystem;
@property (readonly) NSString *softwareType;
@property (readonly) NSString *storeFrontID;
@property (readonly) NSNumber *versionID;
@property (readonly) NSString *environmentProduction;
@property (readonly) NSString *environmentSandbox;
@property (readonly) long long launchResultApplicationDisabled;
@property (readonly) long long launchResultApplicationNotFound;
@property (readonly) long long launchResultInvalidArgument;
@property (readonly) long long launchResultLaunchOrSuspendInProgress;
@property (readonly) long long launchResultLocked;
@property (readonly) long long launchResultLockedOut;
@property (readonly) long long launchResultSecurityPolicy;
@property (readonly) long long launchResultSpringBoardUnavailable;
@property (readonly) long long launchResultSuccess;
@property (readonly) long long launchResultSyncing;
@property (readonly) NSString *softwareTypeNewsstand;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)initWithApplication:(id)a0;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)checkInAppPurchaseQueueWithAccountID:(id)a0 environment:(id)a1;
- (long long)launchWithURL:(id)a0 options:(id)a1 suspended:(id)a2;

@end
