@class NMAPIRequest, ICURLBag;

@interface NMAPIRequestOperation : MPStoreModelRequestOperation {
    ICURLBag *_storeURLBag;
}

@property (copy, nonatomic) NMAPIRequest *request;

- (void)execute;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (void)_writeResponseDictionaryToDisk:(id)a0;
- (id)_readResponseDictionaryFromDisk;
- (void)_personalizeResponse:(id)a0 completion:(id /* block */)a1;

@end
