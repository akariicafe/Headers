@class NSString, NSObject;
@protocol OS_dispatch_queue, CSSmartSiriVolumeProcessor, CSConnectionServiceDelegate;

@interface CSSmartSiriVolumeManager : NSObject <CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSAutomaticVolumeEnabledMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CSSmartSiriVolumeProcessor> smartSiriVolume;
@property (weak, nonatomic) id<CSConnectionServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setPermanentVolumeOffsetWithDirection:(BOOL)a0;
- (void)setSmartSiriVolumeDirection:(BOOL)a0;
- (void)setAsset:(id)a0;
- (void)setSmartSiriVolumePercentage:(float)a0;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)CSVolumeMonitor:(id)a0 didReceiveMusicVolumeChanged:(float)a1;
- (void)CSVolumeMonitor:(id)a0 didReceiveAlarmVolumeChanged:(float)a1;
- (void)CSTimerMonitor:(id)a0 didReceiveTimerChanged:(long long)a1;
- (void)CSAlarmMonitor:(id)a0 didReceiveAlarmChanged:(long long)a1;
- (void)startSmartSiriVolume;
- (id)initWithSamplingRate:(float)a0 withAsset:(id)a1;
- (id)getVolumeForTTSType:(unsigned long long)a0 withOverrideMediaVolume:(id)a1 WithRequestTime:(unsigned long long)a2;
- (void)CSAutomaticVolumeEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;

@end
