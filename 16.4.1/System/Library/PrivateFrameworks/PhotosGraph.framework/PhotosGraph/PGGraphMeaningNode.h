@class MARelation, NSString, PGGraphMeaningNodeCollection, NSArray;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MARelation *childMeaningOfMeaning;
@property (class, readonly, nonatomic) MARelation *parentMeaningOfMeaning;
@property (class, readonly, nonatomic) MARelation *eventOfMeaning;
@property (class, readonly, nonatomic) MARelation *eventOfReliableMeaning;
@property (class, readonly, nonatomic) MARelation *momentOfMeaning;
@property (class, readonly, nonatomic) MARelation *momentOfReliableMeaning;

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long isVeryMeaningfulCachedValue;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (readonly, nonatomic, getter=isVeryMeaningful) BOOL veryMeaningful;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)filterWithMeaning:(unsigned long long)a0;

- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (void)enumerateSubmeaningsUsingBlock:(id /* block */)a0;
- (id)_localizationKeyForMeaningLabel:(id)a0;
- (void)enumerateMeaningfulEventsUsingBlock:(id /* block */)a0;
- (void)traverseParentMeaningHierarchyUsingBlock:(id /* block */)a0;
- (void)traverseSubmeaningHierarchyUsingBlock:(id /* block */)a0;

@end
