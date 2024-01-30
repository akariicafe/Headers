@class NSString, TSULocale;

@interface TSUDurationFormatter : NSFormatter

@property (copy, nonatomic) NSString *format;
@property (nonatomic) int compactStyleStartUnit;
@property (readonly) TSULocale *locale;

- (id)stringForObjectValue:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void)p_commonInit;

@end
