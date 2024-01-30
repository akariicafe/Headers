@interface GEOPlaceDataProvider : NSObject

@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRequest;
- (void)startProviderWithRequest:(id)a0 appIdentifier:(id)a1;
- (void)cancelProviderRequest;
- (void)requestCompleted;
- (void)providerReceivedErrorCode:(long long)a0 userInfo:(id)a1;
- (void)providerDidCancel;
- (void)startRequest:(id)a0 appIdentifier:(id)a1 finished:(id /* block */)a2 error:(id /* block */)a3;
- (void)providerReceivedResponse:(id)a0 userInfo:(id)a1;

@end
