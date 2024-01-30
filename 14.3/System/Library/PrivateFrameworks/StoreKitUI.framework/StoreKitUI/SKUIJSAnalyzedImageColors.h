@class SKUIJSColor;

@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors>

@property (readonly, nonatomic) SKUIJSColor *backgroundColor;
@property (readonly, nonatomic) SKUIJSColor *textPrimaryColor;
@property (readonly, nonatomic) SKUIJSColor *textSecondaryColor;
@property (readonly, nonatomic) BOOL isBackgroundLight;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 analyzedImageColors:(id)a1;

@end
