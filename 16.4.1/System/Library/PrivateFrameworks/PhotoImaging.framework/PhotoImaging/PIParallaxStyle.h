@class NSArray, NSString, PFParallaxColor, NSDictionary, PIParallaxStyleRecipe;

@interface PIParallaxStyle : NSObject

@property (retain, nonatomic) NSArray *colorSuggestions;
@property (readonly, copy, nonatomic) NSString *recipeIdentifier;
@property (readonly, copy, nonatomic) NSString *inactiveRecipeIdentifier;
@property (readonly, nonatomic) PIParallaxStyleRecipe *recipe;
@property (retain, nonatomic) PFParallaxColor *clockColor;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *clockFont;
@property (readonly, nonatomic) BOOL isSegmented;
@property (readonly, nonatomic) BOOL hasTonalityMode;
@property (readonly, nonatomic) BOOL hasColorParameter;

+ (id)_filterForRecipeIdentifier:(id)a0;
+ (id)colorPaletteWithStyleKind:(id)a0;
+ (id)defaultStyleForKind:(id)a0 colorAnalysis:(id)a1;
+ (id)styleWithBakedStyle:(id)a0;
+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)filter;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)bakedStyle;
- (id)colorSuggestionForCategory:(id)a0;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)inactiveFilter;
- (id)initWithClockColor:(id)a0 colorSuggestions:(id)a1;
- (void)updateClockPropertiesWithClockAreaLuminance:(double)a0;

@end
