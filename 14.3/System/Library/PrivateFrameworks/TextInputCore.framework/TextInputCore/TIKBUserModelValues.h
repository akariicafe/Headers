@class NSMutableDictionary, TIKBAnalyticsMetricsContext;

@interface TIKBUserModelValues : TIUserModelValues {
    NSMutableDictionary *_stringValues;
}

@property (readonly, nonatomic) TIKBAnalyticsMetricsContext *kbContext;

- (id)initWithInputMode:(id)a0 context:(id)a1 userModelDataStore:(id)a2 durableCounters:(id)a3 settingsDictionary:(id)a4;
- (void).cxx_destruct;
- (id)settingValueFromName:(id)a0;
- (void)persistForDate:(id)a0;
- (id)metricValue:(id)a0 fromRegistry:(id)a1 andUserModel:(id)a2 forNumberOfDays:(int)a3;
- (id)metricValuesByWordLength:(id)a0 fromRegistry:(id)a1 andUserModel:(id)a2 forNumberOfDays:(int)a3;
- (id)computeValueWithDescriptor:(id)a0 fromRegistry:(id)a1 andUserModel:(id)a2 forNumberOfDays:(int)a3;
- (id)computeValuesByWordLengthWithDescriptor:(id)a0 fromRegistry:(id)a1 andUserModel:(id)a2 forNumberOfDays:(int)a3;
- (id)bucketCountsByWordLength:(id)a0;
- (id)computeValueFromCount:(id)a0 bucketThresholds:(id)a1 bucketValues:(id)a2;
- (id)computeValueFromExpression:(id)a0 precondition:(id)a1 defaultValue:(id)a2 bindings:(id)a3 bucketThresholds:(id)a4 bucketValues:(id)a5;
- (id)calcFloatingKeyboardUsageFromUserModel:(id)a0 andRegistry:(id)a1;
- (id)calcTypingSpeedFromUserModel:(id)a0 andRegistry:(id)a1;
- (id)calcAutocorrectionEnabled;

@end
