@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {
    NSMutableDictionary *_dateFormatters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dateFormattersLock;
    NSMutableDictionary *_numberFormatters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _numberFormattersLock;
    NSNumberFormatter *_durationFormatter;
    NSNumberFormatter *_durationPaddedFormatter;
}

+ (id)sharedInstance;
+ (id)rfc1123DateFormatter;
+ (id)isoDateFormatter;

- (id)formatDuration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)formatLocalizedNumber:(id)a0 style:(id)a1 postiveFormat:(id)a2 negativeFormat:(id)a3 currencyCode:(id)a4;
- (id)formatLocalizedLocaleIdentifier:(id)a0;
- (id)joinComponentsWithLocalizedCommaAndSpace:(id)a0;
- (id)joinComponentsWithLocalizedSemicolonAndSpace:(id)a0;
- (id)formatDate:(id)a0 format:(id)a1;
- (id)formatNumber:(id)a0 style:(id)a1 postiveFormat:(id)a2 negativeFormat:(id)a3;
- (id)joinComponents:(id)a0 withASCII:(id)a1 arabic:(id)a2 ethiopic:(id)a3 ideograph:(id)a4;

@end
