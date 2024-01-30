@class UIColor, NSDateFormatter, NSLocale, NSDateComponentsFormatter;

@interface SCLUnlockHistoryItemFormatter : NSFormatter

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateComponentsFormatter *componentsFormatter;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSLocale *locale;

- (id)stringForObjectValue:(id)a0;
- (id)formatString;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)fontDescriptor;
- (id)timeStringForHistoryItem:(id)a0;
- (id)durationStringForHistoryItem:(id)a0;

@end
