@class HMImmutableSettingValue;

@interface HMImmutableSettingValueEvent : HMEEvent

@property (readonly, nonatomic) HMImmutableSettingValue *settingValue;

+ (id)decodeSettingValueFromEvent:(id)a0 error:(id *)a1;

- (id)encodedData;
- (void).cxx_destruct;
- (id)initSettingValue:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
