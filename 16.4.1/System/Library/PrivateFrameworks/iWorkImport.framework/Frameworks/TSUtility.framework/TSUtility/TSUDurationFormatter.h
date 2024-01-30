@class NSString, TSULocale;

@interface TSUDurationFormatter : NSFormatter

@property (copy, nonatomic) NSString *format;
@property (nonatomic) unsigned char compactStyleStartUnit;
@property (readonly) TSULocale *locale;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)a0;
- (void)p_commonInit;

@end
