@class NSString, NSDate;

@interface SGMessagePair : NSObject

@property (retain, nonatomic) NSString *reply;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSDate *sentAt;

- (void).cxx_destruct;
- (id)initWithReply:(id)a0 prompt:(id)a1 handle:(id)a2 sentAt:(id)a3;

@end
