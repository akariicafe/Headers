@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *fees;

+ (id)recordNamePrefix;
+ (id)_feesSetFromJsonString:(id)a0;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (id)initWithJsonString:(id)a0;
- (id)description;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToFees:(id)a0;
- (id)_feeItemsFromRecord:(id)a0;
- (id)initWithFeeItems:(id)a0;

@end
