@class NSArray, NSString, NSObject;
@protocol OS_os_log;

@interface CPAnalyticsLogDestination : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) NSArray *logEventMatchers;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_logEventMatchersInConfiguration:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (id)_descriptionComponentsForEvent:(id)a0 forProperties:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_logEvent:(id)a0 withLabel:(id)a1 shouldLogEventName:(BOOL)a2 propertiesToLog:(id)a3 publicPropertiesToLog:(id)a4;
- (void)updateWithConfig:(id)a0;

@end
