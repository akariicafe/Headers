@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSGamingTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSGamingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) id<DNDSGamingTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_featureEnabled;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)_configureTriggerWithMode:(id)a0;

@end
