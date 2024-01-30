@interface WFDCMapsLinkContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)additionalRepresentationsForSerialization;
- (BOOL)includesFileRepresentationInSerializedItem;
- (id)mapsLink;

@end
