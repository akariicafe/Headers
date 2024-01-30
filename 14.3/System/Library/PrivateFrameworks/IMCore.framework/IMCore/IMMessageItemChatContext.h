@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext {
    IMMessage *_message;
    BOOL _invitation;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
