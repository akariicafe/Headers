@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)sendReplyIfNotAlreadySent:(id)a0;

@end
