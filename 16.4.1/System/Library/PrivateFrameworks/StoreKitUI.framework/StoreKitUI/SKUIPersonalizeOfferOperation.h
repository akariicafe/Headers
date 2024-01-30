@class SKUIClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIPersonalizeOfferOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(long long)a0 clientContext:(id)a1;

@end
