@interface CPSAnalytics : NSObject

@property (readonly, nonatomic) BOOL shouldRecordAnalyticsEvents;

+ (id)sharedInstance;

- (void)_sendCoreAnalyticsEvent:(id)a0 withDictionary:(id)a1;
- (void)audioAppMetadataThrottledWithBundleIdentifier:(id)a0;
- (void)navigationStartedWithBundleIdentifier:(id)a0;

@end
