@interface FLEnvironment : NSObject

@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isInternal;
- (BOOL)isUnlocked;
- (id)supportedBundleIdentifiers;
- (BOOL)stressMode;
- (id)stressBundleIdentifiers;
- (BOOL)shouldHideAllFollowUps;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;

@end
