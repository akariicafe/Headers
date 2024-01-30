@class NSString, NSArray, NSDate, NSNumber, PLCloudSharedAlbum;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSNumber *invitationStateLocal;
@property (retain, nonatomic) NSNumber *inviteeEmailKey;
@property (retain, nonatomic) NSString *inviteeHashedPersonID;
@property (retain, nonatomic) NSString *inviteeFirstName;
@property (retain, nonatomic) NSString *inviteeLastName;
@property (retain, nonatomic) NSString *inviteeFullName;
@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) NSDate *inviteeSubscriptionDate;
@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (readonly, weak, nonatomic) NSArray *inviteeEmails;
@property (readonly, weak, nonatomic) NSArray *inviteePhones;

+ (id)entityName;
+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)a0 inLibrary:(id)a1;
+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)a0 inLibrary:(id)a1;
+ (id)insertNewInvitationRecordIntoAlbum:(id)a0 withFirstName:(id)a1 lastName:(id)a2 fullName:(id)a3 emails:(id)a4 phones:(id)a5 inLibrary:(id)a6;

- (void)delete;
- (void)willSave;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)init;
- (void)setInviteeEmails:(id)a0 phones:(id)a1;
- (id)inviteeDisplayNameIncludingEmail:(BOOL)a0;
- (id)invitationStateDescription;

@end
