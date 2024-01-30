@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *exchangeRate;

+ (id)recordNamePrefix;

- (void).cxx_destruct;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToForeignExchangeInformation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)jsonString;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
