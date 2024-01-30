@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue

@property (nonatomic) unsigned long long suspendCount;

- (void)suspend;
- (void)resume;
- (void)cancelOperationsForAttachment:(id)a0;

@end
