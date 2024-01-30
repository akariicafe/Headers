@class NSUUID, TSUCustomFormat, TSUCustomFormatData;

@interface TSKCustomFormatWrapper : TSKFormat

@property (nonatomic) unsigned char appliedConditionKey;
@property (readonly, nonatomic) NSUUID *customFormatKey;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSUCustomFormatData *customFormatData;
@property (nonatomic) BOOL isMarkedCorrupt;

+ (id)unpopulatedCustomFormatWrapperWithFormatType:(unsigned int)a0 customFormatKey:(id)a1;
+ (id)populatedCustomFormatWrapperFromCFWrapper:(id)a0 customFormat:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asCustomFormatWrapper;
- (id)currencyCodeForValue:(double)a0;
- (id)initWithFormatType:(unsigned int)a0 customFormatKey:(id)a1 customFormat:(id)a2 appliedConditionKey:(unsigned char)a3;
- (id)stringFromDate:(id)a0 locale:(id)a1;
- (id)applyConditionalValue:(double)a0;
- (id)stringFromString:(id)a0 locale:(id)a1;

@end
