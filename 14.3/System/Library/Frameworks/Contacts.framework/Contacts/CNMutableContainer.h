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

- (void)setName:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (id)externalIdentifier;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setAccountIdentifier:(id)a0;
- (void)setType:(long long)a0;
- (void)setGuardianRestricted:(BOOL)a0 shouldPushChangeToServer:(BOOL)a1;
- (id)accountIdentifier;
- (id)copy;
- (long long)type;
- (id)meIdentifier;
- (id)externalSyncTag;
- (id)externalSyncData;
- (void)setIOSLegacyIdentifier:(int)a0;
- (void)setExternalSyncTag:(id)a0;
- (void)setExternalSyncData:(id)a0;
- (id)constraintsPath;
- (void)setConstraintsPath:(id)a0;
- (void)setMeIdentifier:(id)a0;
- (unsigned long long)restrictions;
- (void)setRestrictions:(unsigned long long)a0;
- (void)setSnapshot:(id)a0;
- (id)name;
- (void)setIdentifier:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (int)iOSLegacyIdentifier;
- (id)identifier;

@end
