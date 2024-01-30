@class PGGraphIngestRecipeParameters, PGManager, NSArray;

@interface PGGraphIngestRecipe : NSObject

@property (readonly, nonatomic) PGGraphIngestRecipeParameters *parameters;
@property (readonly, nonatomic) PGManager *manager;
@property (readonly, nonatomic) NSArray *momentsToIngest;
@property (readonly, nonatomic) NSArray *highlightsToIngest;
@property (readonly, nonatomic) NSArray *preProcessors;
@property (readonly, nonatomic) NSArray *postProcessors;

- (void).cxx_destruct;
- (id)_highlightsForLibraryAnalysisWithFetchOptions:(id)a0;
- (id)_momentsForLibraryAnalysisWithFetchOptions:(id)a0;
- (id)defaultPostProcessors;
- (id)defaultPreProcessors;
- (id)initWithManager:(id)a0 parameters:(id)a1;

@end
