@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject

@property (retain, nonatomic) FLFollowUpItem *item;

+ (id)handlerWithItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)handleAction:(id)a0 completion:(id /* block */)a1;
- (void)handleExtensionBasedAction:(id)a0 completion:(id /* block */)a1;

@end
