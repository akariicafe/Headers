@class NSCountedSet, NSSet, NSDictionary, NSMutableSet, NSMapTable;

@interface PGTextFeatureGenerator : NSObject

@property (retain, nonatomic) NSDictionary *optionsByDomain;
@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSMutableSet *momentIdentifiers;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) unsigned long long numberOfAssets;
@property (retain, nonatomic) NSMapTable *numberOfAssetsBySceneNode;
@property (retain, nonatomic) NSCountedSet *sceneNodes;
@property (retain, nonatomic) NSCountedSet *personNodes;
@property (retain, nonatomic) NSCountedSet *roiNodes;
@property (retain, nonatomic) NSCountedSet *poiNodes;
@property (retain, nonatomic) NSCountedSet *meaningNodes;
@property (retain, nonatomic) NSCountedSet *districtNodes;
@property (retain, nonatomic) NSCountedSet *cityNodes;
@property (retain, nonatomic) NSCountedSet *stateNodes;
@property (retain, nonatomic) NSCountedSet *countryNodes;
@property (retain, nonatomic) NSCountedSet *areaNodes;
@property (retain, nonatomic) NSCountedSet *businessNodes;
@property (retain, nonatomic) NSCountedSet *businessCategoryNodes;
@property (retain, nonatomic) NSCountedSet *holidayNodes;
@property (retain, nonatomic) NSCountedSet *publicEventNodes;
@property (retain, nonatomic) NSCountedSet *publicEventPerformerNodes;
@property (retain, nonatomic) NSCountedSet *publicEventCategoryNodes;

+ (id)_naturalLanguageOptionsByDomain;
+ (id)_knowledgeOptionsByDomain;

- (void)_resetProperties;
- (void).cxx_destruct;
- (id)naturalLanguageFeatures;
- (id)initWithMomentNodes:(id)a0;
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
- (BOOL)boundTextFeaturesPerEvent;
- (id)knowledgeFeatures;
- (void)analyzeMomentNodes;
- (id)generateTextFeatures;
- (id)bestTextFeaturesFromTextFeatures:(id)a0;
- (id)_textFeaturesForNodes:(id)a0 type:(unsigned long long)a1;
- (id)_textFeaturesForNode:(id)a0 type:(unsigned long long)a1 weight:(float)a2;
- (id)_textFeaturesForPersonNodes:(id)a0;
- (id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)a0;

@end
