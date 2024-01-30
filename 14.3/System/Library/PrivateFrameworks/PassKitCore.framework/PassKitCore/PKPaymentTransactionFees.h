@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *fees;

+ (id)_feesSetFromJsonString:(id)a0;
+ (id)recordNamePrefix;

- (void).cxx_destruct;
- (id)_feeItemsFromRecord:(id)a0;
- (id)initWithFeeItems:(id)a0;
- (BOOL)isEqualToFees:(id)a0;
- (id)jsonArrayRepresentation;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithJsonString:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)jsonString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
