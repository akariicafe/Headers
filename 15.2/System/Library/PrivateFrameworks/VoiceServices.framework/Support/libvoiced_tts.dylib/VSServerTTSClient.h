@interface VSServerTTSClient : NSObject

+ (BOOL)shouldUseServerTTSForRequest:(id)a0;

- (void)ospreyStartSynthesisRequest:(id)a0 responseHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)ospreyStartStreamingRequest:(id)a0 dataHandler:(id /* block */)a1 metaInfoHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)genderStringFromVSGender:(long long)a0;

@end
