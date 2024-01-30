@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent

@property (retain, nonatomic) NSString *htmlBody;

- (id)copy;
- (void)dealloc;
- (id)multipartContent;

@end
