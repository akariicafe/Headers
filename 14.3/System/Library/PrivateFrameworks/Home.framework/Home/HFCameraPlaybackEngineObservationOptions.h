@class NSNumber;

@interface HFCameraPlaybackEngineObservationOptions : NSObject

@property (class, readonly, copy, nonatomic) HFCameraPlaybackEngineObservationOptions *defaultOptions;

@property (copy, nonatomic) NSNumber *periodicTimeUpdateInterval;

- (void).cxx_destruct;

@end
