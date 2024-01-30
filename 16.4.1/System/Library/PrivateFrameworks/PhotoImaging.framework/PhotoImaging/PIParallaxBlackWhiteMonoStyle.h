@interface PIParallaxBlackWhiteMonoStyle : PIParallaxStyle

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)parameters;
- (id)kind;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)recipeIdentifier;
- (void)updateClockPropertiesWithClockAreaLuminance:(double)a0;

@end
