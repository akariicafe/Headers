@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)owner;
- (void)setOwner:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalRepresentation;
- (void)setExternalID:(id)a0;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
