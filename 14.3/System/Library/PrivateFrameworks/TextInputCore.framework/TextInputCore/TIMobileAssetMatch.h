@class NSArray;

@interface TIMobileAssetMatch : NSObject

@property (readonly, nonatomic) NSArray *types;
@property (readonly, nonatomic) NSArray *inputModeLevels;
@property (readonly, nonatomic) NSArray *regions;

+ (id)knownAssetRegionAttributes;
+ (id)mobileAssetMatchWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

@end
