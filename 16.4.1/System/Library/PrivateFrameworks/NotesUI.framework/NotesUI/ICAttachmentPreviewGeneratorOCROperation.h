@class NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorOCROperation : ICAttachmentPreviewGeneratorOperation

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;

- (void)main;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
