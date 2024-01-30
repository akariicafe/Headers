@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (int)entityType;
- (id)calendar;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (id)hostURL;
- (void)setHostURL:(id)a0;
- (id)externalModificationTag;
- (void)setExternalModificationTag:(id)a0;
- (id)externalID;
- (void)setUUID:(id)a0;

@end
