@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (void)_start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProductIdentifiers:(id)a0;
- (void)_startWithCompletionHandler:(id /* block */)a0;
- (id)_newResponseForProducts:(id)a0 invalidIdentifiers:(id)a1;

@end
