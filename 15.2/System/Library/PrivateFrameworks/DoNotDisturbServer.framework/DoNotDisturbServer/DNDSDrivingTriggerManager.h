@class CARAutomaticDNDStatus, NSString, NSMutableDictionary, NSObject;
@protocol DNDSDrivingTriggerManagerDataSource, OS_dispatch_queue, DNDSBiomeTriggerManagerDataSource;

@interface DNDSDrivingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CARAutomaticDNDStatus *_status;
}

@property (weak, nonatomic) id<DNDSDrivingTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_featureEnabled;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)_configureDrivingTriggerWithMode:(id)a0;

@end
