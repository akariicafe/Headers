@interface SBClawGestureMetricData : SBAWDMetricData

@property (nonatomic) BOOL didPressLock;
@property (nonatomic) BOOL didPressVolumeUp;
@property (nonatomic) BOOL didPressVolumeDown;
@property (nonatomic) BOOL didTriggerSOS;
@property (nonatomic) unsigned long long duration;

@end
