@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *currencyCodes;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
