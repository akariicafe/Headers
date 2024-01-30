@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)startObservingSystemVolumes;
- (float)musicVolume;
- (float)alarmVolume;
- (void)systemVolumeDidChange:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)dealloc;
- (id)init;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (BOOL)_supportAVSystemVolumeFetch;
- (void)systemControllerDied:(id)a0;
- (float)_getNewSystemVolumesWithNotification:(id)a0 category:(id)a1;
- (void)_notifyObserver:(id)a0 volumeDidChanged:(float)a1 forAudioCategory:(id)a2;
- (void).cxx_destruct;
- (BOOL)_fetchSystemVolumeForCategory:(id)a0 usingSystemController:(id)a1 volume:(float *)a2;

@end
