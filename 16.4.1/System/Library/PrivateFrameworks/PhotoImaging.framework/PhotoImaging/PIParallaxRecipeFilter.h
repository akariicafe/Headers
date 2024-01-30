@class NSDictionary, PIParallaxStyleRecipe;

@interface PIParallaxRecipeFilter : PIParallaxFilter

@property (retain, nonatomic) PIParallaxStyleRecipe *recipe;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSDictionary *resolvedParameters;

- (id)initWithRecipe:(id)a0;
- (void).cxx_destruct;
- (id)_evaluateImageWithFilterDefinitions:(id)a0 inputImage:(id)a1;
- (id)outputBackgroundImage;
- (id)outputForegroundImage;
- (id)outputMatteImage;

@end
