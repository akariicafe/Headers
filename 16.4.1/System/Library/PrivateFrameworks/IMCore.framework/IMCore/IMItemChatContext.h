@class IMHandle;

@interface IMItemChatContext : NSObject

@property (retain, nonatomic) IMHandle *senderHandle;
@property (retain, nonatomic) IMHandle *otherHandle;

- (void)dealloc;
- (void).cxx_destruct;

@end
