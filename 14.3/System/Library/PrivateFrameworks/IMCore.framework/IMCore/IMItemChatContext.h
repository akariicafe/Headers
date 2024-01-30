@class IMHandle;

@interface IMItemChatContext : NSObject {
    IMHandle *_senderHandle;
    IMHandle *_otherHandle;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
