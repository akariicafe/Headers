@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *rewardsItems;

+ (id)_rewardsItemsSetFromJsonString:(id)a0;
+ (id)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (id)_rewardItemsFromRecord:(id)a0;
- (id)initWithRewardsItems:(id)a0;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToRewards:(id)a0;
- (id)initWithJsonString:(id)a0;
- (BOOL)containsItemOfType:(unsigned long long)a0;
- (id)totalEligibleValueForUnit:(unsigned long long)a0;
- (id)description;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;

@end
