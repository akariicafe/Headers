@class NSString, NMBUIPowerSourceInfo, NSObject, NMSMediaSyncInfo;
@protocol OS_dispatch_source, NMBUISyncInfoControllerDataSource;

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate> {
    NSObject<OS_dispatch_source> *_currentSyncInfoRequestDateTimer;
    NMBUIPowerSourceInfo *_powerSourceInfo;
}

@property (readonly, nonatomic) unsigned long long target;
@property (readonly, nonatomic) NMSMediaSyncInfo *syncInfo;
@property (weak, nonatomic) id<NMBUISyncInfoControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateVisibleCellsIfNeeded;
- (void)_handleMediaSyncInfoDidUpdateNotification:(id)a0;
- (id)_bundleIdentifierForTarget;
- (void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)a0;
- (id)initWithSyncInfoTarget:(unsigned long long)a0;
- (unsigned long long)downloadStateForModelObject:(id)a0;
- (float)progressForModelObject:(id)a0;
- (id)syncStatusDetailText;
- (void)beginObservingSyncInfo;
- (void)endObservingSyncInfo;

@end
