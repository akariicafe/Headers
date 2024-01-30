@class NSString;

@interface DAMailboxRequest : NSObject

@property (nonatomic) int requestType;
@property (nonatomic) int bodyFormat;
@property (copy, nonatomic) NSString *messageID;

- (void).cxx_destruct;
- (id)init;

@end
