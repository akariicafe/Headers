@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)externalScheduleID;
- (void)setExternalScheduleID:(id)a0;
- (int)entityType;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (id)owner;
- (void)setExternalRepresentation:(id)a0;
- (id)externalRepresentation;
- (void)setOwner:(id)a0;
- (id)externalID;
- (id)externalFolderID;
- (void)setExternalFolderID:(id)a0;

@end
