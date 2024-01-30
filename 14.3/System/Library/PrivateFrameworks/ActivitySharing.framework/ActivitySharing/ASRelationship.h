@class NSUUID, NSString, CKRecordID, NSDate, NSSet, ASCodableCloudKitRelationship, NSArray, CKRecord;

@interface ASRelationship : NSObject <ASCloudKitCodable, NSCopying>

@property (readonly, nonatomic) ASCodableCloudKitRelationship *codableRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFriendshipActive;
@property (nonatomic) BOOL isMuteEnabled;
@property (nonatomic) BOOL hasIncomingInviteRequest;
@property (nonatomic) BOOL hasOutgoingInviteRequest;
@property (nonatomic) BOOL isAwaitingInviteResponse;
@property (nonatomic) BOOL sentInviteResponse;
@property (nonatomic) BOOL hasIncomingCompetitionRequest;
@property (nonatomic) BOOL hasOutgoingCompetitionRequest;
@property (nonatomic) BOOL hasIgnoredCompetitionRequest;
@property (nonatomic) BOOL isCompetitionActive;
@property (nonatomic) BOOL isAwaitingCompetitionResponse;
@property (nonatomic) BOOL hasCompletedCompetition;
@property (retain, nonatomic) NSDate *dateForLatestIncomingInviteRequest;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (retain, nonatomic) NSDate *dateForLatestDataHidden;
@property (retain, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *incomingHandshakeToken;
@property (retain, nonatomic) NSString *outgoingHandshakeToken;
@property (retain, nonatomic) NSString *cloudKitAddress;
@property (retain, nonatomic) NSSet *addresses;
@property (retain, nonatomic) NSString *preferredReachableAddress;
@property (retain, nonatomic) NSString *preferredReachableService;
@property (retain, nonatomic) CKRecord *systemFieldsOnlyRecord;
@property (retain, nonatomic) CKRecordID *relationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteRelationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteActivityDataShareID;
@property (copy, nonatomic) NSArray *relationshipEvents;
@property (nonatomic) unsigned int supportedPhoneFeatures;
@property (nonatomic) unsigned int supportedWatchFeatures;
@property (readonly, nonatomic) BOOL isActivityDataVisible;
@property (readonly, nonatomic) BOOL isHidingActivityData;
@property (readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
@property (readonly, nonatomic) unsigned long long currentRelationshipEventAnchor;

+ (id)relationshipWithCodableRelationship:(id)a0 version:(long long)a1;
+ (void)_relationshipWithRecord:(id)a0 relationshipEventRecords:(id)a1 completion:(id /* block */)a2;
+ (id)relationshipsWithRelationshipAndEventRecords:(id)a0;
+ (id)relationshipWithCodableRelationshipContainer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_nextAnchor;
- (BOOL)isEqual:(id)a0;
- (id)recordWithZoneID:(id)a0;
- (id)codableRelationshipContainerIncludingCloudKitFields:(BOOL)a0;
- (void)_updateCurrentRelationshipState;
- (BOOL)isEqualToRelationship:(id)a0;
- (void)_setRelationshipEvents:(id)a0;
- (void)insertEventWithType:(unsigned short)a0 timestamp:(id)a1;
- (void)insertEvents:(id)a0;
- (void)_clearRelationshipState;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)a0;
- (void)_updateDateFriendshipBeganWithDate:(id)a0;
- (void)insertEventWithType:(unsigned short)a0;
- (id)relationshipSnapshotForDate:(id)a0;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)supportsCompetitions;

@end
