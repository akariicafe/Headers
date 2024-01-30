@class NSLocale;

@interface AMPICUNumberFormatter : NSObject

@property (nonatomic) void **icuNumberFormatter;
@property (nonatomic) unsigned long long extendedStyle;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringFromNumber:(id)a0;
- (id)initWithExtendedStyle:(unsigned long long)a0 locale:(id)a1;

@end
