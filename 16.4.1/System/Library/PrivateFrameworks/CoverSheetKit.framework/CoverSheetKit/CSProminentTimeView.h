@class NSString, NSDateFormatter, UIFont;

@interface CSProminentTimeView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) BOOL usesLightTimeFontVariant;
@property (nonatomic) BOOL usesLandscapeTimeFontVariant;
@property (retain, nonatomic) UIFont *baseFont;
@property (copy, nonatomic) NSString *numberingSystem;

+ (id)_lightVariantForBaseFont:(id)a0 size:(double)a1;
+ (unsigned long long)elementType;
+ (id)_prominentFontFromBaseFont:(id)a0 usingLightVariant:(BOOL)a1 usingLandscapeVariant:(BOOL)a2;

- (void)_updateTimeFormatter;
- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (id)initWithDate:(id)a0 baseFont:(id)a1 textColor:(id)a2;
- (void)currentLocaleDidChange:(id)a0;
- (void)setDate:(id)a0;
- (id)_correctedDateFormat;
- (id)_localeAccountingForNumberingSystem:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateTimeString;
- (void)_updateTimeFormatterNumberingSystem;
- (id)_timeString;
- (void).cxx_destruct;

@end
