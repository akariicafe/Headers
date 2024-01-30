@class NSMutableDictionary, TIKBAnalyticsMetricsContext;

@interface TIKBUserModelValues : TIUserModelValues {
    NSMutableDictionary *_stringValues;
}

@property (readonly, nonatomic) TIKBAnalyticsMetricsContext *kbContext;

- (void).cxx_destruct;
- (void)persistForDate:(id)a0;
- (id)initWithInputMode:(id)a0 context:(id)a1 userModelDataStore:(id)a2 durableCounters:(id)a3 settingsDictionary:(id)a4;
- (id)settingValueFromName:(id)a0;
- (id)bucketCountsByWordLength:(id)a0;
- (id)calcAutocorrectionEnabled;
- (id)calcFloatingKeyboardUsageFromUserModel:(id)a0;
- (id)calcTypingSpeedFromUserModel:(id)a0;
- (id)computeValueFromCount:(id)a0 bucketThresholds:(id)a1 bucketValues:(id)a2;
- (id)computeValueFromExpression:(id)a0 precondition:(id)a1 defaultValue:(id)a2 bindings:(id)a3 bucketThresholds:(id)a4 bucketValues:(id)a5;
- (id)computeValueWithDescriptor:(id)a0 userModel:(id)a1 forNumberOfDays:(int)a2;
- (id)computeValuesByWordLengthWithDescriptor:(id)a0 userModel:(id)a1 forNumberOfDays:(int)a2;
- (id)metricValue:(id)a0 userModel:(id)a1 forNumberOfDays:(int)a2;
- (id)metricValuesByWordLength:(id)a0 userModel:(id)a1 forNumberOfDays:(int)a2;

@end
