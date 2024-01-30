@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue

@property (nonatomic) unsigned long long suspendCount;

- (void)resume;
- (void)suspend;
- (void)cancelOperationsForAttachment:(id)a0;

@end
