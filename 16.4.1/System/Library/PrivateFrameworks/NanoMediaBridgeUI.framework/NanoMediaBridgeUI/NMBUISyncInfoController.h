@class NMSMediaSyncInfoUpdaterHeartbeat, NSString, NSUserDefaults, NMBUIPowerSourceInfo, NMSMediaSyncInfo;
@protocol NMBUISyncInfoControllerDataSource;

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate> {
    NMSMediaSyncInfoUpdaterHeartbeat *_syncInfoUpdaterHeartbeat;
    NMBUIPowerSourceInfo *_powerSourceInfo;
    NSUserDefaults *_greenTeaDefaults;
    BOOL _isObservingSyncInfo;
}

@property (readonly, nonatomic) unsigned long long target;
@property (readonly, nonatomic) NMSMediaSyncInfo *syncInfo;
@property (weak, nonatomic) id<NMBUISyncInfoControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_bundleIdentifierForTarget;
- (void)_handleMediaSyncInfoDidUpdateNotification:(id)a0;
- (void)_handleMusicCellularDownloadsAllowedDidChangeNotification:(id)a0;
- (BOOL)_musicCellularDownloadingAllowedOnWatch;
- (id)_musicSyncInfoMessageWithStatus:(unsigned long long)a0 downloadPauseReason:(unsigned long long)a1;
- (void)beginObservingSyncInfo;
- (unsigned long long)downloadStateForModelObject:(id)a0;
- (void)endObservingSyncInfo;
- (id)initWithSyncInfoTarget:(unsigned long long)a0;
- (void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)a0;
- (float)progressForModelObject:(id)a0;
- (id)syncStatusDetailText;

@end
