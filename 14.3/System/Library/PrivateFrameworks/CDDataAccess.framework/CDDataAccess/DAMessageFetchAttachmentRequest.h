@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *attachmentName;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAttachmentName:(id)a0 andMessageServerID:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
