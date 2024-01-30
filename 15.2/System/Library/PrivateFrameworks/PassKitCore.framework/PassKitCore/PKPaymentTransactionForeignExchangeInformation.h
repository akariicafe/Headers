@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *exchangeRate;

+ (id)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)jsonString;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (unsigned long long)itemType;
- (BOOL)isEqualToForeignExchangeInformation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isValid;

@end
