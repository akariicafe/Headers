@class NSString, NSData, CNContainer, NSDate;

@interface CNMutableContainer : CNContainer

@property (copy, nonatomic) CNContainer *snapshot;
@property (nonatomic) long long type;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalSyncTag;
@property (copy, nonatomic) NSData *externalSyncData;
@property (copy, nonatomic) NSString *constraintsPath;
@property (copy, nonatomic) NSString *meIdentifier;
@property (nonatomic) unsigned long long restrictions;
@property (nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;

- (id)freeze;
- (void)setExternalModificationTag:(id)a0;
- (void)setSnapshot:(id)a0;
- (void)setAccountIdentifier:(id)a0;
- (id)accountIdentifier;
- (long long)type;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (void)setType:(long long)a0;
- (void)setEnabled:(BOOL)a0;
- (id)copy;
- (void)setName:(id)a0;
- (id)externalModificationTag;
- (id)externalIdentifier;
- (void)setExternalIdentifier:(id)a0;
- (id)name;
- (unsigned long long)restrictions;
- (void)setRestrictions:(unsigned long long)a0;
- (id)freezeWithSelfAsSnapshot;
- (int)iOSLegacyIdentifier;
- (id)externalSyncTag;
- (id)constraintsPath;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)externalSyncData;
- (id)meIdentifier;
- (void)setConstraintsPath:(id)a0;
- (void)setExternalSyncData:(id)a0;
- (void)setExternalSyncTag:(id)a0;
- (void)setGuardianRestricted:(BOOL)a0 shouldPushChangeToServer:(BOOL)a1;
- (void)setIOSLegacyIdentifier:(int)a0;
- (void)setMeIdentifier:(id)a0;

@end
