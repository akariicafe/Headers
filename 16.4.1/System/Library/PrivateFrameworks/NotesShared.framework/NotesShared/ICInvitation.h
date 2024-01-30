@class NSData, NSString, NSURL, NSDate, ICCloudSyncingObject, CKShare, NSValueTransformer, ICAccount;

@interface ICInvitation : NSManagedObject

@property (class, readonly, nonatomic) NSValueTransformer *shareSystemFieldsTransformer;

@property (copy, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) ICCloudSyncingObject *rootObject;
@property (copy, nonatomic) NSString *rootObjectType;
@property (copy, nonatomic) NSData *serverShareData;
@property (retain, nonatomic) CKShare *serverShare;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSDate *receivedDate;
@property (copy, nonatomic) NSString *snippet;
@property (nonatomic) short snippetAttachmentType;
@property (nonatomic) long long snippetAttachmentCount;
@property (copy, nonatomic) NSData *thumbnailDataLight;
@property (copy, nonatomic) NSData *thumbnailDataDark;
@property (nonatomic) long long noteCount;
@property (nonatomic) long long noteCountRecursive;
@property (nonatomic) long long subfolderCount;
@property (nonatomic) long long subfolderCountRecursive;

+ (id)invitationsMatchingPredicate:(id)a0 context:(id)a1;
+ (id)predicateForPendingInvitationsInAccount:(id)a0 receivedSince:(id)a1;
+ (id)invitationWithShareURL:(id)a0 context:(id)a1;
+ (id)allInvitationsInContext:(id)a0;
+ (id)makeInvitationIfNeededWithShareURL:(id)a0 account:(id)a1 context:(id)a2;
+ (id)makeInvitationWithShareURL:(id)a0 account:(id)a1 context:(id)a2;
+ (id)predicateForPendingInvitationsInAccount:(id)a0;

- (void).cxx_destruct;

@end
