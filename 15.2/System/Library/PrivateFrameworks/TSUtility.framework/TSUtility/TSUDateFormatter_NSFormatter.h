@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter

@property (retain, nonatomic) NSString *preferredFormat;
@property (nonatomic) BOOL isDateOnly;
@property (nonatomic) BOOL isTimeOnly;

- (id)stringForObjectValue:(id)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;

@end
