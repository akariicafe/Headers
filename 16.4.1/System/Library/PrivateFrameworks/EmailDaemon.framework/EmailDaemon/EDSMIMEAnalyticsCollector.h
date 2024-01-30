@class NSString, EDMessagePersistence;
@protocol EDSMIMEConfigurationProvider;

@interface EDSMIMEAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider>

@property (readonly, nonatomic) id<EDSMIMEConfigurationProvider> smimeConfigurationProvider;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)coreAnalyticsPeriodicEvent;
- (id)initWithAnalyticsCollector:(id)a0 smimeConfigurationProvider:(id)a1 messagePersistence:(id)a2;

@end
