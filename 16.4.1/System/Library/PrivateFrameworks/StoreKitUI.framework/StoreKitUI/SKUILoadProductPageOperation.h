@class SKUIClientContext, SSMetricsPageEvent, NSObject, NSURLRequest;
@protocol OS_dispatch_queue;

@interface SKUILoadProductPageOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;
    id /* block */ _outputBlock;
    NSURLRequest *_urlRequest;
}

@property (copy) id /* block */ outputBlock;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;

- (void)main;
- (void).cxx_destruct;
- (id)_initSKUILoadProductPageOperation;
- (id)initWithItemIdentifier:(long long)a0 clientContext:(id)a1;
- (id)initWithProductPageURLRequest:(id)a0 clientContext:(id)a1;

@end
