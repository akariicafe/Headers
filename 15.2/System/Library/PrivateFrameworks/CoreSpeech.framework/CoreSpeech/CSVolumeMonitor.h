@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (float)_getNewSystemVolumesWithNotification:(id)a0 category:(id)a1;
- (void)systemVolumeDidChange:(id)a0;
- (void)_notifyObserver:(id)a0 volumeDidChanged:(float)a1 forAudioCategory:(id)a2;
- (BOOL)_fetchSystemVolumeForCategory:(id)a0 usingSystemController:(id)a1 volume:(float *)a2;
- (float)musicVolume;
- (void)_startObservingSystemControllerLifecycle;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)systemControllerDied:(id)a0;
- (id)init;
- (float)alarmVolume;
- (void)startObservingSystemVolumes;
- (void)dealloc;
- (BOOL)_supportAVSystemVolumeFetch;

@end
