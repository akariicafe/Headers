@class NSString, NSArray;

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString *_label;
}

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)filter;
+ (id)filterWithCategory:(id)a0;
+ (id)filterWithCategories:(id)a0;
+ (id)publicEventOfCategory;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)associatedNodesForRemoval;
- (id)initWithLabel:(id)a0 localizedName:(id)a1;

@end
