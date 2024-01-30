@interface CATransactionCompletionItem : NSObject {
    void *_priv;
}

+ (id)completionItem;

- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
