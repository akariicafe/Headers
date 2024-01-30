@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isUnlocked;
- (double)oneDayTimeInterval;
- (BOOL)isInternal;
- (BOOL)stressMode;
- (id)supportedNotifyingAppIds;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)normalizeExpirationToMidnight;
- (BOOL)shouldHideAllFollowUps;
- (void).cxx_destruct;
- (id)supportedBundleIdentifiers;
- (id)init;
- (id)stressBundleIdentifiers;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;

@end
