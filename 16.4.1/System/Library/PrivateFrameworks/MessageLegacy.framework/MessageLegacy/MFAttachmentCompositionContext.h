@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject

@property (readonly, nonatomic) NSString *contextID;
@property (copy, nonatomic) NSURL *attachmentsBaseURL;
@property (readonly, nonatomic) NSArray *attachments;

- (void)dealloc;
- (id)init;
- (id)initWithContextID:(id)a0;

@end
