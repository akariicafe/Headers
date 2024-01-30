@class NSUUID, NSString, NSData, NSURL, MKFIncomingInvitationDatabaseID, NSDate, Protocol, _MKFHomeManager, NSNumber;
@protocol MKFHomeManager;

@interface _MKFIncomingInvitation : _MKFInvitation <MKFIncomingInvitation, MKFIncomingInvitationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSString *inviterMergeID;
@property (copy, nonatomic) NSString *inviterPairingIdentifier;
@property (retain, nonatomic) NSData *inviterPairingPublicKey;
@property (copy, nonatomic) NSString *inviterUserID;
@property (retain, nonatomic) NSData *shareToken;
@property (copy, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSString *inviterMergeID;
@property (copy, nonatomic) NSString *inviterPairingIdentifier;
@property (retain, nonatomic) NSData *inviterPairingPublicKey;
@property (copy, nonatomic) NSString *inviterUserID;
@property (retain, nonatomic) NSData *shareToken;
@property (copy, nonatomic) NSURL *shareURL;
@property (readonly, retain, nonatomic) id<MKFHomeManager> homeManager;
@property (readonly, copy, nonatomic) MKFIncomingInvitationDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfIncomingInvitation;

@end
