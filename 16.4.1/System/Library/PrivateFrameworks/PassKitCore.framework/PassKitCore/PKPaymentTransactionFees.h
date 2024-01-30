@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *fees;

+ (id)recordNamePrefix;
+ (id)_feesSetFromJsonString:(id)a0;

- (unsigned long long)itemType;
- (void)encodeWithCoder:(id)a0;
- (id)primaryIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)jsonString;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (id)_feeItemsFromRecord:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithFeeItems:(id)a0;
- (id)initWithJsonString:(id)a0;
- (BOOL)isEqualToFees:(id)a0;
- (id)jsonArrayRepresentation;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
