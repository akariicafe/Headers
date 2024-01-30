@interface AVTUsageTracker : NSObject

+ (id)currentSession;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0 withCoreAnalyticsClient:(id)a1;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0;

@end
