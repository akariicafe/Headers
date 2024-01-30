@interface HRERecommendableObjectUtilities : NSObject

+ (BOOL)_actionMap:(id)a0 includesType:(id)a1 forRecommendableObject:(id)a2;
+ (id)actionMapFromActionMap:(id)a0 forRecommendableObject:(id)a1;
+ (id)filterRecommendableObjects:(id)a0 excludingObjectsInActions:(id)a1;
+ (id)filterRecommendableObjects:(id)a0 toMatchTypes:(id)a1;
+ (id)filterRecommendableObjects:(id)a0 toRooms:(id)a1;
+ (id)recommendableObject:(id)a0 actionBuildersDerivedFromActions:(id)a1;
+ (BOOL)recommendableObject:(id)a0 containsObject:(id)a1;
+ (BOOL)recommendableObject:(id)a0 involvedInAction:(id)a1;
+ (BOOL)recommendableObject:(id)a0 involvedInActionMap:(id)a1;
+ (BOOL)recommendableObject:(id)a0 isEffectivelyEqualToObject:(id)a1;
+ (BOOL)recommendableObjects:(id)a0 matchAllRules:(id)a1;
+ (id)recommendableObjectsFromHomeKitObjects:(id)a0;

@end
