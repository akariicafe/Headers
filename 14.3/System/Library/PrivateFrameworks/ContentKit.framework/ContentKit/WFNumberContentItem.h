@class NSNumber;

@interface WFNumberContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSNumber *number;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
