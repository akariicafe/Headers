@class NSString, NPKLowPowerModeLocalDeviceMonitor, NSObject, PKFieldDetector;
@protocol NPKPassSelectionFieldDetectorManagerDelegate, OS_dispatch_queue, NPKPassesDataSource;

@interface NPKPassSelectionFieldDetectorManager : NSObject <PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKLowPowerModeMonitorObserver> {
    PKFieldDetector *_fieldDetector;
    NSObject<OS_dispatch_queue> *_fieldDetectorUpdateQueue;
    NPKLowPowerModeLocalDeviceMonitor *_lowPowerModeMonitor;
}

@property (weak, nonatomic) id<NPKPassSelectionFieldDetectorManagerDelegate> delegate;
@property (weak, nonatomic) id<NPKPassesDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldEnableFieldDetectWithPasses:(id)a0 lowPowerModeMonitor:(id)a1;

- (void)setFieldDetectEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (id)_applicablePassUniqueIDsWithFieldProperties:(id)a0;
- (id)initWithDataSource:(id)a0 lowPowerModeMonitor:(id)a1;
- (id)initWithDataSource:(id)a0 lowPowerModeMonitor:(id)a1 delegate:(id)a2;
- (void)lowPowerModeMonitor:(id)a0 didUpdateLowPowerModeEnabled:(BOOL)a1;
- (void)passesDataSource:(id)a0 didAddPasses:(id)a1;
- (void)passesDataSource:(id)a0 didRemovePasses:(id)a1;
- (void)passesDataSource:(id)a0 didUpdatePasses:(id)a1;
- (void)passesDataSourceDidReloadPasses:(id)a0;
- (void)passesDataSourceDidReorderPasses:(id)a0;

@end
