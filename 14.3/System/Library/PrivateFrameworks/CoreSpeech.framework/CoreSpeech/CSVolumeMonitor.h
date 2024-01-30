@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObservingSystemControllerLifecycle;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)systemControllerDied:(id)a0;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)startObservingSystemVolumes;
- (BOOL)_fetchSystemVolumeForCategory:(id)a0 usingSystemController:(id)a1 volume:(float *)a2;
- (BOOL)_supportAVSystemVolumeFetch;
- (float)_getNewSystemVolumesWithNotification:(id)a0 category:(id)a1;
- (void)_notifyObserver:(id)a0 volumeDidChanged:(float)a1 forAudioCategory:(id)a2;
- (void)systemVolumeDidChange:(id)a0;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (float)alarmVolume;

@end
