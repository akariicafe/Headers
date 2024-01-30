@class NSString, NPSDomainAccessor, NPSManager;
@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager> {
    BOOL _listen;
    BOOL _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
}

@property (weak, nonatomic) id<DNDSSettingsSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSSettingsSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanupState;
+ (id)sendManagerForPairedDevice:(id)a0;
+ (id)receiveManagerForPairedDevice:(id)a0;

- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (void)update;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (id)_initWithListen:(BOOL)a0 send:(BOOL)a1 pairedDevice:(id)a2;
- (void)_updateBypassSettings;
- (void)_updateScheduleSettingsWithDate:(id)a0;
- (void)_propagateBypassSettings:(id)a0;
- (void)_propagateScheduleSettings:(id)a0;

@end
