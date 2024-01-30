@class PFParallaxColor;

@interface PIParallaxColorWashDuotoneStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (retain, nonatomic) PFParallaxColor *primaryColor;
@property (retain, nonatomic) PFParallaxColor *secondaryColor;
@property (retain, nonatomic) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)parameters;
- (id)kind;
- (void).cxx_destruct;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (BOOL)hasColorParameter;
- (id)initWithPrimaryColor:(id)a0 secondaryColor:(id)a1 clockColor:(id)a2 colorSuggestions:(id)a3;
- (id)recipeIdentifier;

@end
