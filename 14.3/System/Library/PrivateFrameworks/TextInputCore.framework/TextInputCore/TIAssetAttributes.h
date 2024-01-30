@class NSString, NSDictionary;

@interface TIAssetAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *inputModeLevel;
@property (readonly, nonatomic) NSDictionary *region;

+ (BOOL)_anyStringIn:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (BOOL)_anyDictionaryIn:(id)a0 matches:(id)a1 shouldLenientlyMatch:(id /* block */)a2;
+ (BOOL)_string:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (BOOL)_dictionary:(id)a0 matches:(id)a1 acceptUnspecifiedAttribute:(BOOL)a2 lenientMatch:(BOOL)a3;
+ (id)assetAttributesWithType:(id)a0 inputModeLevel:(id)a1 region:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 inputModeLevel:(id)a1 region:(id)a2;
- (BOOL)containMatchingType:(id)a0;
- (BOOL)containMatchingTypeIn:(id)a0;
- (BOOL)containMatchingInputModeLevel:(id)a0;
- (BOOL)containMatchingInputModeLevelIn:(id)a0;
- (BOOL)containMatchingRegionIn:(id)a0 shouldLenientlyMatchRegion:(id /* block */)a1;
- (BOOL)containMatchingAttributes:(id)a0;

@end
