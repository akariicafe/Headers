@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter

@property (copy, nonatomic) NSString *picaSeparator;
@property (copy, nonatomic) NSNumber *minimum;
@property (copy, nonatomic) NSNumber *maximum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithPicaSeparator:(id)a0;

@end
