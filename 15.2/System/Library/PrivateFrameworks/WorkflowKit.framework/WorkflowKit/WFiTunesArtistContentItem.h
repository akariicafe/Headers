@interface WFiTunesArtistContentItem : WFiTunesObjectContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (BOOL)canLowercaseTypeDescription;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
