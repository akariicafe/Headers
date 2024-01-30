@class NSString, NSArray, NSURL, NSMutableDictionary, MFAttachmentManager;

@interface MFAttachmentCompositionContext : NSObject {
    NSMutableDictionary *_hostIdentifierToAttachmentContentIDMap;
}

@property (readonly, nonatomic) NSString *contextID;
@property (retain, nonatomic) NSURL *attachmentsBaseURL;
@property (retain, nonatomic) MFAttachmentManager *attachmentsManager;
@property (readonly, nonatomic) NSArray *attachments;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHostIdentifier:(id)a0 forAttachment:(id)a1;
- (id)attachmentForHostIdentifier:(id)a0;
- (id)initWithContextID:(id)a0;

@end
