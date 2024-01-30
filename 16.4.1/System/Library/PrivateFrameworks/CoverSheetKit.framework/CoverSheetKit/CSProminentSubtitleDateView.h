@class NSString, NSDateFormatter, NSLocale;

@interface CSProminentSubtitleDateView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSDateFormatter *alternateDateFormatter;
@property (copy, nonatomic) NSString *alternateCalendarIdentifier;
@property (retain, nonatomic) NSLocale *alternateCalendarLocale;

+ (unsigned long long)elementType;

- (id)overrideString;
- (void)setAlternateCalendarIdentifier:(id)a0 locale:(id)a1;
- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (BOOL)_wantsCompactForOrientation;
- (void)setDate:(id)a0;
- (id)initWithDate:(id)a0 textColor:(id)a1;
- (id)_alternateDateString;
- (void)_updateLabel;
- (id)_dateString;
- (void).cxx_destruct;

@end
