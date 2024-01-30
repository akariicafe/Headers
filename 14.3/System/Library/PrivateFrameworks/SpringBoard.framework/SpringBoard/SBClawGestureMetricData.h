@interface SBClawGestureMetricData : SBAWDMetricData {
    BOOL _didPressLock;
    BOOL _didPressVolumeUp;
    BOOL _didPressVolumeDown;
    BOOL _didTriggerSOS;
    unsigned long long _duration;
}

@end
