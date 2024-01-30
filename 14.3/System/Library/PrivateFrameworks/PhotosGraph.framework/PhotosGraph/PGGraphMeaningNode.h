@class MARelation, NSString, NSArray;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MARelation *submeaningOfMeaning;
@property (class, readonly, nonatomic) MARelation *eventOfMeaning;
@property (class, readonly, nonatomic) MARelation *momentOfMeaning;

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long isVeryMeaningfulCachedValue;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (readonly, nonatomic, getter=isVeryMeaningful) BOOL veryMeaningful;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)meaningLabelsForMeaningNodes:(id)a0;

- (id)momentNodes;
- (id)associatedNodesForRemoval;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)highlightNodes;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (void)enumerateMeaningfulEventsUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)enumerateSubmeaningsUsingBlock:(id /* block */)a0;
- (void)traverseSubmeaningHierarchyUsingBlock:(id /* block */)a0;
- (void)traverseParentMeaningHierarchyUsingBlock:(id /* block */)a0;
- (id)_localizationKeyForMeaningLabel:(id)a0;

@end
