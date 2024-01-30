@interface EKPersistentSharee : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)setFirstName:(id)a0;
- (int)entityType;
- (void)setLastName:(id)a0;
- (id)displayName;
- (void)setOwner:(id)a0;
- (void)setExternalID:(id)a0;
- (id)address;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (id)UUID;
- (id)description;
- (void)setAddress:(id)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastName;
- (id)externalID;
- (void)setDisplayName:(id)a0;
- (id)firstName;
- (void)setUUID:(id)a0;

@end
