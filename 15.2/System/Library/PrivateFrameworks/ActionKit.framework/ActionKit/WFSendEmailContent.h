@class NSArray, NSString;

@interface WFSendEmailContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) BOOL isHTML;
@property (copy, nonatomic) NSArray *attachments;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
