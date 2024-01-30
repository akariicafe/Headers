@class NSNumberFormatter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)a0;
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)a0;
+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)a0;
+ (id)sharedFormatter;

- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueuePositionalFormatStringForStyle:(long long)a0;
- (id)_hiddenComponentStringWithString:(id)a0;
- (id)stringFromDuration:(double)a0 style:(long long)a1;
- (id)stringFromDuration:(double)a0 hideComponentOptions:(long long)a1 style:(long long)a2;
- (void)reloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromDuration:(double)a0 replacingDigitsWithDigit:(unsigned long long)a1 style:(long long)a2;
- (id)_onQueueStringFromDuration:(double)a0 byReplacingDigitsWithDigit:(long long)a1 hideComponentOptions:(long long)a2 style:(long long)a3;

@end
