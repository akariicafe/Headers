@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)calendar;
- (id)UUID;
- (void)setExternalID:(id)a0;
- (void)setUUID:(id)a0;
- (id)externalID;
- (id)externalModificationTag;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
