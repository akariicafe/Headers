@class NSString, TSULocale;

@interface TSUDurationFormatter : NSFormatter

@property (copy, nonatomic) NSString *format;
@property (nonatomic) int compactStyleStartUnit;
@property (readonly) TSULocale *locale;

- (id)init;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)initWithLocale:(id)a0;
- (void)p_commonInit;

@end
