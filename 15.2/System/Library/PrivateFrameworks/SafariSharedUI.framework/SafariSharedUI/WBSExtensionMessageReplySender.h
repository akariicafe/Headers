@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendReplyIfNotAlreadySent:(id)a0;

@end
