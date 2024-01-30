@class MPMediaItemCollection;

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) MPMediaItemCollection *collection;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

@end
