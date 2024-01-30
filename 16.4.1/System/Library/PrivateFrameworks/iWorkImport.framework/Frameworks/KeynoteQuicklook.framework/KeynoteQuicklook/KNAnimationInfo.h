@class NSSet, NSString, NSDictionary, NSArray;

@interface KNAnimationInfo : NSObject {
    NSSet *_supportedCustomAttributeKeys;
}

@property (retain, nonatomic) Class animationClass;
@property (retain, nonatomic) NSSet *validAnimationTypes;
@property (readonly, nonatomic) NSString *effectIdentifier;
@property (readonly, nonatomic) BOOL isDrift;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) NSString *animationFilter;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) unsigned long long directionType;
@property (readonly, nonatomic) NSSet *supportedCustomAttributeKeys;
@property (readonly, nonatomic) NSArray *customAttributes;
@property (readonly, nonatomic) NSDictionary *customAttributeDefaults;
@property (readonly, nonatomic) NSString *localizedBuildInName;
@property (readonly, nonatomic) NSString *localizedBuildOutName;
@property (readonly, nonatomic) NSString *localizedActionBuildName;
@property (readonly, nonatomic) NSString *localizedContentBuildName;
@property (readonly, nonatomic) NSString *localizedTransitionName;

+ (id)effectIdentifiersForAnimationInfos:(id)a0;
+ (id)localizedEffectNamesForAnimationInfos:(id)a0 animationType:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)customAttributesForAttributeKey:(id)a0;
- (id)customEffectTimingCurveDisplayParametersForAttributes:(id)a0 layoutStyleOnly:(BOOL)a1;
- (id)initWithAnimationClass:(Class)a0;
- (id)localizedNameForType:(long long)a0;
- (BOOL)supportsAnimationType:(long long)a0;
- (BOOL)supportsCustomAttributeKey:(id)a0;
- (id)thumbnailImageNameForType:(long long)a0;

@end
