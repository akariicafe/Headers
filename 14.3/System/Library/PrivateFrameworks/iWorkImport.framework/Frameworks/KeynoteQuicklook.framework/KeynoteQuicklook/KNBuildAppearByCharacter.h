@class NSArray, NSString;

@interface KNBuildAppearByCharacter : KNBuildAppear <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving>

@property (class, readonly, nonatomic) NSArray *obsoleteAnimationNames;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customAttributes;
+ (id)defaultAttributes;
+ (id)animationName;
+ (id)animationFilter;
+ (void)upgradeAttributes:(id *)a0 animationName:(id)a1 oldAnimationName:(id)a2 warning:(id *)a3 type:(long long)a4 isFromClassic:(BOOL)a5 version:(unsigned long long)a6;
+ (void)downgradeAttributes:(id *)a0 animationName:(id *)a1 warning:(id *)a2 type:(long long)a3 isToClassic:(BOOL)a4 version:(unsigned long long)a5;
+ (BOOL)shouldWarnOnUpgradeWithOldAnimationName:(id)a0 version:(unsigned long long)a1;
+ (id)localizedAnimationStringForUpgradeWarning:(long long)a0;
+ (unsigned long long)p_legacyDirectionWithDirection:(unsigned long long)a0 type:(long long)a1;
+ (unsigned long long)p_textDeliveryOptionWithDirection:(unsigned long long)a0 type:(long long)a1 isClassic:(BOOL)a2;


@end
