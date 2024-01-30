@class NSString, NSMutableDictionary, NSObject;
@protocol DNDSSleepingTriggerManagerDataSource, OS_dispatch_queue, DNDSBiomeTriggerManagerDataSource;

@interface DNDSSleepingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) id<DNDSSleepingTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_featureEnabled;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_configureSleepingTriggerWithMode:(id)a0;
- (void)refresh;

@end
