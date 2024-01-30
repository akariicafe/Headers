@class NSString, ICNote, ICAttachment;

@interface ICBaseAttachment : ICCloudSyncingObject

@property (copy, nonatomic) NSString *typeUTI;
@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICAttachment *parentAttachment;
@property (readonly, nonatomic) ICBaseAttachment *rootParentAttachment;

+ (void)deleteAttachment:(id)a0;
+ (void)undeleteAttachment:(id)a0;
+ (id)predicateForVisibleAttachmentsInContext:(id)a0;
+ (id)predicateForVisibleObjects;
+ (id)newAttachmentWithIdentifier:(id)a0 note:(id)a1;
+ (id)attachmentWithIdentifier:(id)a0 context:(id)a1;
+ (id)attachmentWithIdentifier:(id)a0 includeDeleted:(BOOL)a1 context:(id)a2;
+ (id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)a0 inContext:(id)a1;
+ (void)purgeAttachment:(id)a0;
+ (id)attachmentsMatchingPredicate:(id)a0 context:(id)a1;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)a0;
+ (id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)a0;
+ (id)notDeletedPredicate;

- (BOOL)isVisible;
- (id)parentCloudObject;
- (void)setParentAttachment:(id)a0;
- (id)rootParentAttachment;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;

@end
