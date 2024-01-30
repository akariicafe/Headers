@class NSNumberFormatter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)a0;
+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)a0;
+ (id)sharedFormatter;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)a0;

- (id)stringFromDuration:(double)a0 style:(long long)a1;
- (id)_onQueueStringFromDuration:(double)a0 style:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_onQueuePositionalFormatStringForStyle:(long long)a0;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)a0 replacingDigitsWithDigit:(unsigned long long)a1 style:(long long)a2;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)a0 byReplacingDigitsWithDigit:(long long)a1 style:(long long)a2;

@end
