@class DNDSSyncSettings, NPSDomainAccessor, NSObject;
@protocol OS_dispatch_queue, DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NPSDomainAccessor *_accessor;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_updateSyncPreferences;
- (void)_queue_updateSyncPreferences;

@end
