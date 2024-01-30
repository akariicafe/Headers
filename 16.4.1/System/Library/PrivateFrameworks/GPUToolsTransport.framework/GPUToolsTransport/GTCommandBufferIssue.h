@class NSString, NSData, NSArray;

@interface GTCommandBufferIssue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *metalLogMessage;
@property (copy, nonatomic) NSData *commandBufferCommitCallstackData;
@property (nonatomic) unsigned int commandBufferCommitCallstackFramesNum;
@property (copy, nonatomic) NSArray *faultingEncoders;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
