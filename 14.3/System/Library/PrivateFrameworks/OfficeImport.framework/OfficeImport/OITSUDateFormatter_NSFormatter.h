@class NSString, OITSULocale;

@interface OITSUDateFormatter_NSFormatter : NSFormatter

@property (retain, nonatomic) NSString *preferredFormat;
@property (nonatomic) BOOL isDateOnly;
@property (nonatomic) BOOL isTimeOnly;
@property (retain, nonatomic) OITSULocale *locale;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;

@end
