@class NSString, NSLocale;

@interface AMPICUNumberFormatter : NSObject

@property (nonatomic) void **_icuNumberFormatter;
@property (copy, nonatomic) NSString *_localeIdentifierBeingUsed;
@property (copy, nonatomic) NSString *_currencyCodeBeingUsed;
@property (nonatomic) BOOL usesGroupingSeparator;
@property (nonatomic) unsigned long long extendedStyle;
@property (retain, nonatomic) NSLocale *locale;

- (id)stringFromNumber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithExtendedStyle:(unsigned long long)a0 locale:(id)a1;
- (BOOL)_localeHasChanged;

@end
