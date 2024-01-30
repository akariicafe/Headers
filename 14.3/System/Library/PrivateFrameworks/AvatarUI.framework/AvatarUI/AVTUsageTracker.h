@interface AVTUsageTracker : NSObject

+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0 withCoreAnalyticsClient:(id)a1;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0;
+ (id)currentSession;

@end
