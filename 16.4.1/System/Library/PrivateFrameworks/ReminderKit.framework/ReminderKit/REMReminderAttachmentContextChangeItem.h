@class NSArray, NSMutableArray, REMReminderChangeItem;

@interface REMReminderAttachmentContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableArray *mutableAttachments;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (readonly, nonatomic) NSArray *urlAttachments;

- (void).cxx_destruct;
- (void)addAttachment:(id)a0;
- (void)removeAttachment:(id)a0;
- (id)addImageAttachmentWithURL:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 error:(id *)a3;
- (void)removeAllAttachments;
- (id)addFileAttachmentWithData:(id)a0 uti:(id)a1;
- (id)addImageAttachmentWithData:(id)a0 uti:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)addURLAttachmentWithURL:(id)a0;
- (void)insertAttachment:(id)a0 afterAttachment:(id)a1;
- (void)insertAttachment:(id)a0 beforeAttachment:(id)a1;
- (void)removeURLAttachments;
- (id)setURLAttachmentWithURL:(id)a0;
- (id)addFileAttachmentWithURL:(id)a0 error:(id *)a1;
- (id)attachmentsOfClass:(Class)a0;
- (id)initWithReminderChangeItem:(id)a0;
- (id)newObjectIDForFileAttachment;
- (id)newObjectIDForImageAttachment;
- (id)newObjectIDForURLAttachment;
- (void)removeAllAttachmentsWithClass:(Class)a0;

@end
