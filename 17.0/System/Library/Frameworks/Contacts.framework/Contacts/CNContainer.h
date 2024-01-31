@class NSString, NSData, CNContainerPermissions, NSDate;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {
    CNContainer *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CNContainer *snapshot;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, copy, nonatomic) NSString *externalSyncTag;
@property (readonly, copy, nonatomic) NSData *externalSyncData;
@property (readonly, copy, nonatomic) NSString *constraintsPath;
@property (readonly, copy, nonatomic) NSString *meIdentifier;
@property (readonly, nonatomic) unsigned long long restrictions;
@property (readonly, nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) CNContainerPermissions *permissions;
@property (readonly, nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (readonly, nonatomic, getter=isParentallyManaged) BOOL parentallyManaged;
@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSString *externalIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

+ (id)makeIdentifierString;
+ (id)predicateForContainersWithType:(long long)a0;
+ (id)predicateForLocalContainerIncludingDisabled:(BOOL)a0;
+ (id)identifierProvider;
+ (id)predicateForContainerOfContactWithIdentifier:(id)a0;
+ (id)makeDefaultContainerPermissions;
+ (id)predicateForContainersInAccountWithIdentifier:(id)a0;
+ (id)predicateForContainersWithIdentifiers:(id)a0;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)a0;
+ (id)predicateForContainersInAccountWithIdentifier:(id)a0 includingDisabledContainers:(BOOL)a1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)a0;
+ (id)makeIdentifier;
+ (id)descriptionForContainerType:(long long)a0;
+ (id)predicateForContainerWithExternalIdentifier:(id)a0;
+ (id)predicateForiOSLegacyIdentifier:(int)a0;
+ (id)predicateForContainersIncludingDisabled:(BOOL)a0;

- (id)initWithContainer:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 accountIdentifier:(id)a1 name:(id)a2 type:(long long)a3 permissions:(id)a4 externalIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 iOSLegacyIdentifier:(int)a3 accountIdentifier:(id)a4 enabled:(BOOL)a5 permissions:(id)a6 externalIdentifier:(id)a7 externalModificationTag:(id)a8 externalSyncTag:(id)a9 externalSyncData:(id)a10 constraintsPath:(id)a11 meIdentifier:(id)a12 restrictions:(unsigned long long)a13 guardianRestricted:(BOOL)a14 lastSyncDate:(id)a15;
- (id)initWithName:(id)a0 type:(long long)a1 externalIdentifier:(id)a2;

@end
