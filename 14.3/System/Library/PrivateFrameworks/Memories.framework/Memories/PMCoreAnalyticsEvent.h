@class NSString;

@interface PMCoreAnalyticsEvent : NSObject <CoreAnalyticsEventProtocol>

@property (nonatomic) BOOL appendBundleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleForAnalytics;

- (id)eventName;
- (id)eventPayload;
- (void)sendToCoreAnalytics;

@end
