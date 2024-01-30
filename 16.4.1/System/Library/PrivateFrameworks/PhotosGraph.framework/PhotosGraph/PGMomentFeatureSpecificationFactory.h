@class CLSSceneTaxonomyHierarchy, CVNLPCLIPModel, NSObject;
@protocol OS_os_log;

@interface PGMomentFeatureSpecificationFactory : NSObject {
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    NSObject<OS_os_log> *_loggingConnection;
    CVNLPCLIPModel *_CLIPModel;
}

- (void).cxx_destruct;
- (id)_CLIPTrendsSpecificationsWithProgress:(id)a0;
- (id)_babySpecification;
- (id)_beachROISpecification;
- (id)_excitementAudioSpecification;
- (id)_foodSpecification;
- (id)_mountainROISpecification;
- (id)_natureROISpecification;
- (id)_peopleSpecification;
- (id)_petPersonSpecification;
- (id)_petSpecification;
- (id)_socialGroupSpecification;
- (id)_trendsSpecifications;
- (id)_urbanROISpecification;
- (id)_waterROISpecification;
- (id)allSupportedFeatureTypes;
- (id)defaultPeopleAssetFilter;
- (id)initWithSceneTaxonomy:(id)a0 loggingConnection:(id)a1;
- (id)specificationsForFeatureType:(unsigned long long)a0 progressReporter:(id)a1;

@end
