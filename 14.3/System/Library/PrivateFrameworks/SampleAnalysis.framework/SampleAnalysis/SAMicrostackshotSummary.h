@class NSMutableDictionary;

@interface SAMicrostackshotSummary : NSObject {
    NSMutableDictionary *_microstackshotStateCounts;
    unsigned long long _userActiveCount;
    unsigned long long _userIdleCount;
    unsigned long long _onBatteryCount;
    unsigned long long _onACCount;
}

- (id)init;
- (void).cxx_destruct;

@end
