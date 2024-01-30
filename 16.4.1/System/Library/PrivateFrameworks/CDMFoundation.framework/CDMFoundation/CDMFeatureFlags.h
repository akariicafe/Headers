@interface CDMFeatureFlags : NSObject

+ (BOOL)isSiriMiniEnabled;
+ (BOOL)isUaaPPreferred;
+ (BOOL)isCcqrAerCbrRdDependencyEnabled;
+ (BOOL)isLogNluEnabled;
+ (BOOL)isShortcutsNLv4FollowupEnabled:(id)a0;
+ (BOOL)globalOverridesAreEnabled;
+ (BOOL)isCATIEnabled;
+ (BOOL)isCATIMultiTurnEnabled;
+ (BOOL)isCDMClientXPCEnabled;
+ (BOOL)isCcqrAerCbrEnabled;
+ (BOOL)isContextUpdateEnabled;
+ (BOOL)isContextualSpanMatcherEnabled;
+ (BOOL)isFeatureStoreEnabled;
+ (BOOL)isFeatureStoreEnabledForExternalBuilds;
+ (BOOL)isLVCEnabled;
+ (BOOL)isLighthouseAPIEnabled;
+ (BOOL)isMarrsMentionDetectorEnabled;
+ (BOOL)isMarrsMentionResolverEnabled;
+ (BOOL)isMentionResolverRewriterEnabled;
+ (BOOL)isPSCEnabled;
+ (BOOL)isRepetitionDetectionEnabled;
+ (BOOL)isSSUCacheUpdateOnEveryRequestEnabled;
+ (BOOL)isSSUEnabled;
+ (BOOL)isTrieOverridesEnabled;
+ (BOOL)isUaaPEnabled;

@end
