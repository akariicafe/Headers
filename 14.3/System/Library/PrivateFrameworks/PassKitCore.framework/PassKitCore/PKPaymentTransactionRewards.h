@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *rewardsItems;

+ (id)recordNamePrefix;
+ (id)_rewardsItemsSetFromJsonString:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonArrayRepresentation;
- (id)_rewardItemsFromRecord:(id)a0;
- (id)initWithRewardsItems:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToRewards:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithJsonString:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (id)totalEligibleValueForUnit:(unsigned long long)a0;
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
