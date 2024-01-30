@class NSDictionary, NSArray;

@interface KNAnimationRegistry : NSObject {
    NSDictionary *_classesForTypeAndName;
    NSDictionary *_classesForTypeAndCategory;
    NSDictionary *_classesForTypeAndFilter;
    NSDictionary *_classesForTypeAndObsoleteName;
    NSDictionary *_alternateEffectIdentifiersForEffectIdentifierAndFilter;
    NSArray *_animationInfos;
}

+ (id)instance;
+ (id)animationsInBundle;
+ (id)categoryNameForPluginClass:(Class)a0;
+ (id)localizedCategoryNameForCategory:(long long)a0;
+ (id)localizedNameForUnsupportedAnimation:(id)a0;
+ (id)preferredCategoryOrder;

- (id)init;
- (void).cxx_destruct;
- (id)allAnimationInfos;
- (id)animationInfoForEffectIdentifier:(id)a0 animationType:(long long)a1;
- (id)animationInfoForEffectIdentifier:(id)a0 animationType:(long long)a1 includeObsoleteNames:(BOOL)a2;
- (id)animationInfoForEffectIdentifier:(id)a0 animationType:(long long)a1 includeObsoleteNames:(BOOL)a2 drawable:(id)a3;
- (id)animationInfosForAnimationType:(long long)a0 category:(id)a1;
- (id)animationInfosForAnimationType:(long long)a0 filter:(id)a1;
- (BOOL)canMapEffectIdentifier:(id)a0 animationType:(long long)a1 toEffectIdentifier:(id)a2 includeObsoleteNames:(BOOL)a3 forDrawable:(id)a4;
- (id)distinctCategoriesForType:(long long)a0;
- (id)p_buildAlternateFilterMap;

@end
