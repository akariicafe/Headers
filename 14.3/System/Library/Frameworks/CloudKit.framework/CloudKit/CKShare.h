@class CKContainerID, NSData, NSArray, CKRecordID, NSString, NSURL, CKShareParticipant, NSMutableSet, NSMutableArray, CKShareID;

@interface CKShare : CKRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *addedParticipantIDs;
@property (retain, nonatomic) NSMutableSet *removedParticipantIDs;
@property (retain, nonatomic) NSMutableArray *lastFetchedParticipants;
@property (nonatomic) BOOL encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property (retain, nonatomic) NSMutableArray *allParticipants;
@property (retain, nonatomic) NSData *publicSharingIdentity;
@property (nonatomic) long long participantVisibility;
@property (nonatomic) BOOL allowsAnonymousPublicAccess;
@property (retain, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) CKRecordID *rootRecordID;
@property (retain, nonatomic) NSData *invitedProtectionData;
@property (retain, nonatomic) NSString *invitedProtectionEtag;
@property (retain, nonatomic) NSString *previousInvitedProtectionEtag;
@property (retain, nonatomic) NSData *publicProtectionData;
@property (retain, nonatomic) NSString *publicProtectionEtag;
@property (retain, nonatomic) NSString *previousPublicProtectionEtag;
@property (readonly, nonatomic) BOOL isZoneWideShare;
@property (retain, nonatomic) NSArray *invitedKeysToRemove;
@property (nonatomic) BOOL serializePersonalInfo;
@property (copy, nonatomic) CKShareID *shareID;
@property (nonatomic) long long publicPermission;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) CKShareParticipant *owner;
@property (readonly, copy, nonatomic) CKShareParticipant *currentUserParticipant;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)shareURL;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (void)addParticipant:(id)a0;
- (id)initWithRecordType:(id)a0;
- (void)encodeSystemFieldsWithCoder:(id)a0;
- (id)initWithRecordType:(id)a0 zoneID:(id)a1;
- (id)copyWithOriginalValues;
- (BOOL)canHostServerURLInfo;
- (id)encryptedPublicSharingKey;
- (BOOL)hasEncryptedData;
- (void)setWantsPublicSharingKey:(BOOL)a0;
- (void)_stripPersonalInfo;
- (id)initWithRootRecord:(id)a0 shareID:(id)a1;
- (void)_commonCKShareInit;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)a0;
- (void)_removePendingPrivateAndAdminParticipants;
- (void)_removeAllParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)a0;
- (id)_knownParticipantEqualToParticipant:(id)a0;
- (void)_removeParticipantBypassingChecks:(id)a0;
- (BOOL)_participantArray:(id)a0 containsEquivalentWithPermissionsParticipant:(id)a1;
- (id)addedParticipants;
- (BOOL)_participantArray:(id)a0 isEquivalentToArray:(id)a1;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (void)registerFetchedParticipant:(id)a0;
- (void)clearModifiedParticipants;
- (id)initWithRootRecord:(id)a0;
- (id)initWithRecordZoneID:(id)a0;
- (id)_initWithShareRecordID:(id)a0;
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)a0;
- (BOOL)allowsReadOnlyParticipantsToSeeEachOther;
- (id)updateFromServerShare:(id)a0;
- (id)_copyWithoutPersonalInfo;
- (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(BOOL)a2 inContainer:(id)a3 completionHandler:(id /* block */)a4;
- (void)_getDecryptedShareInContainer:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)removeParticipant:(id)a0;
- (void)CKAssignToContainerWithID:(id)a0;

@end
