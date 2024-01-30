@class PFParallaxColor;

@interface PIParallaxColorBGStandardStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (class, readonly) double lowKeyTone;
@property (class, readonly) double neutralTone;
@property (class, readonly) double highKeyTone;

@property (retain, nonatomic) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)parameters;
- (id)kind;
- (void).cxx_destruct;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (BOOL)hasColorParameter;
- (id)initWithBackgroundColor:(id)a0 clockColor:(id)a1 colorSuggestions:(id)a2;
- (id)recipeIdentifier;

@end
