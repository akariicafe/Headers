@interface HDAudioAnalyticsNoiseSettingsResult : NSObject

@property (nonatomic) BOOL hasWatchPairedWithNoiseApp;
@property (nonatomic) BOOL hasNoiseEnabled;
@property (nonatomic) BOOL hasNoiseNotificationsEnabled;

- (id)initWithWatchPairedWithNoiseApp:(BOOL)a0 hasNoiseEnabled:(BOOL)a1 hasNoiseNotificationsEnabled:(BOOL)a2;

@end
