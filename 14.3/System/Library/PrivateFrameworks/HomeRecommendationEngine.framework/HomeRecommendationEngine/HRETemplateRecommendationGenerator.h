@class NSArray;

@interface HRETemplateRecommendationGenerator : HREStandardAsyncRecommendationSource

@property (retain, nonatomic) NSArray *templates;

- (void).cxx_destruct;
- (id)initWithTemplates:(id)a0;
- (void)setupProcess:(id)a0;
- (unsigned long long)disablingOptions;
- (Class)generationProcessClass;
- (id)filterTemplates:(id)a0 withOptions:(unsigned long long)a1;

@end
