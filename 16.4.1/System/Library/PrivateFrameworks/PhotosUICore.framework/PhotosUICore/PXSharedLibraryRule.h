@class NSArray, NSDate;

@interface PXSharedLibraryRule : NSObject <NSCopying>

@property (readonly, nonatomic) long long autoSharePolicy;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSArray *personUUIDs;
@property (readonly, copy, nonatomic) NSArray *assetLocalIdentifiers;

+ (id)customizedRuleWithStartDate:(id)a0 personUUIDs:(id)a1;
+ (id)everythingRule;
+ (id)manualRule;
+ (id)manualRuleWithAssetLocalIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithAutoSharePolicy:(long long)a0 startDate:(id)a1 personUUIDs:(id)a2 assetLocalIdentifiers:(id)a3;

@end
