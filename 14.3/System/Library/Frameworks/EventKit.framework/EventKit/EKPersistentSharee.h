@interface EKPersistentSharee : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)meltedClass;

- (void)setFirstName:(id)a0;
- (void)setUUID:(id)a0;
- (id)firstName;
- (int)entityType;
- (id)lastName;
- (void)setExternalID:(id)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (void)setAddress:(id)a0;
- (id)address;
- (void)setDisplayName:(id)a0;
- (void)setOwner:(id)a0;
- (id)description;
- (id)externalID;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setLastName:(id)a0;
- (id)displayName;

@end
