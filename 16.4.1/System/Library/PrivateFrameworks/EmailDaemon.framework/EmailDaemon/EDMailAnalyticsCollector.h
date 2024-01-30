@class NSString, EDMessagePersistence, EDSMIMEAnalyticsCollector;

@interface EDMailAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider>

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDSMIMEAnalyticsCollector *smimeAnalyticsCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)coreAnalyticsPeriodicEvent;
- (id)initWithAnalyticsCollector:(id)a0 smimeConfigurationProvider:(id)a1 messagePersistence:(id)a2;

@end
