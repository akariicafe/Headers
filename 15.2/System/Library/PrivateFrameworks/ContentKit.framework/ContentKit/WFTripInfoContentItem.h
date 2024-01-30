@class WFTripInfo;

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFTripInfo *tripInfo;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;

- (id)distance;
- (id)routeName;
- (id)travelTime;
- (id)arrivalTime;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
