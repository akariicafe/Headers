@class NSString, NSSet, NSMutableSet, PVSceneTaxonomy;

@interface PVSceneTaxonomyNode : NSObject

@property (retain) NSMutableSet *parentNodes;
@property (retain) NSMutableSet *childNodes;
@property (retain) NSMutableSet *detectorNodes;
@property (readonly) PVSceneTaxonomy *taxonomy;
@property (readonly) unsigned int sceneClassId;
@property (readonly, copy) NSString *name;
@property (readonly, getter=isIndexed) BOOL indexed;
@property (readonly) double threshold;
@property (readonly) double highRecallThreshold;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double graphHighPrecisionThreshold;
@property (readonly) double graphHighRecallThreshold;
@property (readonly, copy) NSSet *parents;
@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly, getter=isRoot) BOOL root;

+ (id)localizedStringForKey:(id)a0 localizationBundle:(id)a1 tableName:(id)a2;

- (id)localizedLabel;
- (void).cxx_destruct;
- (void)addChildNode:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (void)addDetectorNode:(id)a0;
- (unsigned long long)hash;
- (void)traverse:(long long)a0 visitor:(id /* block */)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSceneClassId:(unsigned int)a0 name:(id)a1 indexed:(BOOL)a2 threshold:(double)a3 highRecallThreshold:(double)a4 highPrecisionThreshold:(double)a5 taxonomy:(id)a6;
- (void)recursivelyReleaseParents;
- (id)localizedSynonyms;

@end
