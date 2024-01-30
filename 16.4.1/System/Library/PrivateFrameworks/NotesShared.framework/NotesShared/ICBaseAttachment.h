@class NSString, ICNote, ICAccount, ICAttachment;

@interface ICBaseAttachment : ICCloudSyncingObject

@property (copy, nonatomic) NSString *typeUTI;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICAttachment *parentAttachment;
@property (readonly, nonatomic) ICBaseAttachment *rootParentAttachment;

+ (id)attachmentWithIdentifier:(id)a0 context:(id)a1;
+ (id)attachmentsMatchingPredicate:(id)a0 context:(id)a1;
+ (void)deleteAttachment:(id)a0;
+ (id)notDeletedPredicate;
+ (id)predicateForVisibleObjects;
+ (id)attachmentWithIdentifier:(id)a0 includeDeleted:(BOOL)a1 context:(id)a2;
+ (id)newAttachmentWithIdentifier:(id)a0 note:(id)a1;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)a0;
+ (id)predicateForVisibleAttachmentsInContext:(id)a0;
+ (id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)a0 inContext:(id)a1;
+ (id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)a0;
+ (void)purgeAttachment:(id)a0;
+ (void)undeleteAttachment:(id)a0;

- (BOOL)isVisible;
- (id)cloudAccount;
- (id)parentCloudObject;
- (void)setParentAttachment:(id)a0;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;
- (id)rootParentAttachment;

@end
