@class NSArray;

@interface TIMobileAssetMatch : NSObject

@property (readonly, nonatomic) NSArray *types;
@property (readonly, nonatomic) NSArray *inputModeLevels;
@property (readonly, nonatomic) NSArray *regions;

+ (id)knownAssetRegionAttributes;
+ (id)mobileAssetMatchWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

@end
