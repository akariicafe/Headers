@class NSArray;

@interface HRETemplateRecommendationGenerator : HREStandardAsyncRecommendationSource

@property (retain, nonatomic) NSArray *templates;

+ (id)allAvailableTemplates;

- (void).cxx_destruct;
- (id)initWithTemplates:(id)a0;
- (unsigned long long)disablingOptions;
- (id)filterTemplates:(id)a0 withOptions:(unsigned long long)a1;
- (Class)generationProcessClass;
- (void)setupProcess:(id)a0;

@end
