@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *attachmentName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAttachmentName:(id)a0 andMessageServerID:(id)a1;

@end
