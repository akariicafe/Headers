@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (id)possibleRoles;
+ (id)possibleStatuses;

- (BOOL)isCurrentUser;
- (id)role;
- (id)status;
- (id)participant;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (BOOL)canGenerateContact;

@end
