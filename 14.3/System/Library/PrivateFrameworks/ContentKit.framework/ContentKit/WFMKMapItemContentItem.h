@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) CLLocation *queryLocation;
@property (readonly, nonatomic) MKMapItem *mapItem;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)itemWithMapItem:(id)a0 fromQueryLocation:(id)a1;

- (void).cxx_destruct;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;

@end
