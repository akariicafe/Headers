@class NSNumber;

@interface TSKNumberFormat : TSKFormat <NSCopying> {
    NSNumber *_propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) BOOL usePlusSign;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asNumberFormat;
- (id)initWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned long long)a1 negativeStyle:(unsigned char)a2 showSeparator:(BOOL)a3;
- (id)decimalFormatterForLocale:(id)a0;

@end
