@class NSString;

@interface DAMailboxRequest : NSObject

@property (nonatomic) int requestType;
@property (nonatomic) int bodyFormat;
@property (copy, nonatomic) NSString *messageID;

- (id)init;
- (void).cxx_destruct;

@end
