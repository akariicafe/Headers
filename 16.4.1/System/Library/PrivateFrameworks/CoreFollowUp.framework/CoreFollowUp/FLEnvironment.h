@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (double)oneDayTimeInterval;
- (BOOL)isInternal;
- (BOOL)isUnlocked;
- (id)stressBundleIdentifiers;
- (BOOL)normalizeExpirationToMidnight;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)stressMode;
- (id)supportedNotifyingAppIds;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)supportedBundleIdentifiers;

@end
