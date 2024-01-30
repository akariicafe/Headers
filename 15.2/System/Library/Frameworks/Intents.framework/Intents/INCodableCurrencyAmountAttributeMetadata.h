@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *currencyCodes;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)initWithCoder:(id)a0;

@end
