@class NSString, NSNumber;

@interface TSKCurrencyFormat : TSKFormat <NSCopying> {
    NSNumber *_propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) unsigned long long currencyCodeIndex;
@property (readonly, nonatomic) BOOL accountingStyle;
@property (readonly, nonatomic) BOOL usePlusSign;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asCurrencyFormat;
- (id)initWithDecimalPlaces:(unsigned long long)a0 negativeStyle:(unsigned char)a1 showSeparator:(BOOL)a2 accountingStyle:(BOOL)a3 currencyCode:(id)a4;
- (id)decimalFormatterForLocale:(id)a0;

@end
