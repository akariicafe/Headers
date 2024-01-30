@interface EKPersistentEventAction : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (void)setOwner:(id)a0;
- (void)setExternalID:(id)a0;
- (void)setExternalScheduleID:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalRepresentation;
- (id)externalModificationTag;
- (id)externalFolderID;
- (void)setExternalFolderID:(id)a0;
- (id)owner;
- (void)setExternalModificationTag:(id)a0;
- (id)externalScheduleID;
- (id)externalID;

@end
