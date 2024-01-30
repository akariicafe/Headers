@class NSString, PVSceneTaxonomy, NSSet;

@interface PVSceneTaxonomyNode : NSObject {
    void *_nodeRef;
}

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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)localizedLabel;
- (void).cxx_destruct;
- (id)initWithNodeRef:(void *)a0 taxonomy:(id)a1;
- (BOOL)isEqualToNode:(id)a0;
- (id)localizedSynonyms;
- (void)traverse:(long long)a0 visitor:(id /* block */)a1;

@end
