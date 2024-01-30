@class NSNumber;

@interface TSKNumberFormat : TSKFormat <NSCopying> {
    NSNumber *_propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) int negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) BOOL usePlusSign;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asNumberFormat;
- (id)initWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned long long)a1 negativeStyle:(int)a2 showSeparator:(BOOL)a3;

@end
