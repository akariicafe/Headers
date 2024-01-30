@class NSString;
@protocol MSPDFAttachmentControllerDelegate;

@interface MSPDFAttachmentController : NSObject <MSMailWebProcessAttachmentProxy>

@property (weak, nonatomic) id<MSPDFAttachmentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)updateToInlinePDFAttachmentIfNeeded:(id)a0;

@end
