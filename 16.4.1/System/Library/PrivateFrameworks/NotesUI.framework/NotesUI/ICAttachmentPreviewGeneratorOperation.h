@class NSManagedObjectContext, ICAttachmentModel, NSManagedObjectID;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation

@property (retain) NSManagedObjectID *attachmentID;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;
@property (readonly, nonatomic) unsigned long long type;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithAttachmentManagedObjectID:(id)a0;

@end
