@class NSString, NSNumber;

@interface TSKCurrencyFormat : TSKFormat <NSCopying> {
    NSNumber *_propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) int negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned long long currencyCodeIndex;
@property (readonly, nonatomic) BOOL accountingStyle;
@property (readonly, nonatomic) BOOL usePlusSign;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asCurrencyFormat;
- (id)initWithDecimalPlaces:(unsigned long long)a0 negativeStyle:(int)a1 showSeparator:(BOOL)a2 accountingStyle:(BOOL)a3 currencyCode:(id)a4;

@end
