@class NSObject;
@protocol VCAudioPowerLevelMonitorDelegate;

@interface VCAudioPowerLevelMonitor : NSObject {
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    BOOL isAudioPowerBelowThreshold;
    BOOL isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
}

@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;

- (id)init;
- (void)detectRemoteAveragePowerLevel:(float)a0 timestamp:(unsigned int)a1;

@end
