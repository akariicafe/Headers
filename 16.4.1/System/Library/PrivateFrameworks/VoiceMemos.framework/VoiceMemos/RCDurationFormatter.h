@class NSNumberFormatter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_styleToLocalizedDateTimeFormatTemplate;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedDateTimeFormatTemplateForStyle:(long long)a0;
+ (id)sharedFormatter;
+ (id)_dateTimeFormatTemplateForStyle:(long long)a0;

- (id)_onQueueStringFromDuration:(double)a0 byReplacingDigitsWithDigit:(long long)a1 hideComponentOptions:(long long)a2 style:(long long)a3;
- (struct RCDurationStrings { id x0; id x1; id x2; id x3; })durationStringsFromDurationIntegers:(struct RCDurationIntegers { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 hideComponentOptions:(long long)a1 style:(long long)a2;
- (void)reloadLocalizedFormatStrings;
- (void)_onQueueReloadLocalizedFormatStrings;
- (struct RCDurationIntegers { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })durationIntegersFromDuration:(double)a0 byReplacingDigitsWithDigit:(long long)a1 style:(long long)a2;
- (void)_replaceComponentPlaceholderForType:(unsigned long long)a0 withString:(id)a1 inLocalizedDataFormatTemplate:(id)a2;
- (id)stringFromDuration:(double)a0 hideComponentOptions:(long long)a1 style:(long long)a2;
- (id)init;
- (id)stringFromDuration:(double)a0 replacingDigitsWithDigit:(unsigned long long)a1 style:(long long)a2;
- (void).cxx_destruct;
- (id)localizedStringFromDurationStrings:(struct RCDurationStrings { id x0; id x1; id x2; id x3; })a0 style:(long long)a1;

@end
