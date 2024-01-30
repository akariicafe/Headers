@class NSArray;

@interface PIParallaxStyleRecipeRegistry : NSObject

@property (class, readonly, nonatomic) NSArray *supportedIdentifiers;

+ (id)_recipesForIdentifiers:(id)a0 withURLProvider:(id)a1;
+ (id)recipeForIdentifier:(id)a0;

@end
