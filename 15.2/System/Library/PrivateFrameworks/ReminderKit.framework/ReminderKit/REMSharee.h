@class NSArray, NSString, NSPersonNameComponents, REMObjectID;

@interface REMSharee : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly, nonatomic) BOOL rem_DA_supportsFetching;
@property (class, readonly, nonatomic) BOOL rem_DA_supportsConcealedObjects;
@property (class, readonly, nonatomic) NSArray *rem_DA_propertiesAffectingIsConcealed;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDsBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromTombstoneBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromConcealedModelObjectBlock;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSPersonNameComponents *personNameComponents;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long accessLevel;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)objectIDWithUUID:(id)a0;
+ (BOOL)isChangeTrackableModel;
+ (id)newObjectID;
+ (id)nullifiedAssignmentOriginatorID;

- (id)shortName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedName;
- (id)initShareeWithObjectID:(id)a0 accountID:(id)a1 listID:(id)a2 displayName:(id)a3 firstName:(id)a4 middleName:(id)a5 lastName:(id)a6 namePrefix:(id)a7 nameSuffix:(id)a8 nickname:(id)a9 address:(id)a10 status:(long long)a11 accessLevel:(long long)a12;
- (BOOL)isEqualToSharee:(id)a0;
- (id)formattedNameWithStyle:(long long)a0;
- (id)initShareeWithObjectID:(id)a0 accountID:(id)a1 listID:(id)a2 displayName:(id)a3 firstName:(id)a4 lastName:(id)a5 address:(id)a6 status:(long long)a7 accessLevel:(long long)a8;
- (id)initShareeWithObjectID:(id)a0 accountID:(id)a1 listID:(id)a2 personNameComponents:(id)a3 address:(id)a4 status:(long long)a5 accessLevel:(long long)a6;

@end
