@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setFirstName:(id)a0;
- (void)setAddress:(id)a0;
- (id)owner;
- (id)displayName;
- (void)setOwner:(id)a0;
- (id)lastName;
- (id)UUID;
- (void)setLastName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)address;
- (id)firstName;
- (void)setExternalID:(id)a0;
- (void)setUUID:(id)a0;
- (id)externalID;
- (id)description;
- (void)setDisplayName:(id)a0;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
