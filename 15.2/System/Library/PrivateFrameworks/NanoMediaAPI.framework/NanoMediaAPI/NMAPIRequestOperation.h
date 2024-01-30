@class NMAPIRequest, NSDictionary;

@interface NMAPIRequestOperation : MPStoreModelRequestOperation {
    NSDictionary *_storeBagDictionary;
}

@property (copy, nonatomic) NMAPIRequest *request;

- (void)execute;
- (id)initWithRequest:(id)a0;
- (void)_writeResponseDictionaryToDisk:(id)a0;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)_readResponseDictionaryFromDisk;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_personalizeResponse:(id)a0 completion:(id /* block */)a1;

@end
