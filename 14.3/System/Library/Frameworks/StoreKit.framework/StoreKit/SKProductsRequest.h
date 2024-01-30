@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (void)_start;
- (id)init;
- (id)_newResponseForProducts:(id)a0 invalidIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)_startWithCompletionHandler:(id /* block */)a0;
- (id)initWithProductIdentifiers:(id)a0;

@end
