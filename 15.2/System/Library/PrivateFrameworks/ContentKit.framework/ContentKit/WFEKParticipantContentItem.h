@class WFParticipant;

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFParticipant *participant;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (id)possibleRoles;
+ (id)possibleStatuses;

- (id)status;
- (id)role;
- (BOOL)isCurrentUser;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)canGenerateContact;

@end
