@class NSString, NSError;

@interface _SSBDatabaseUpdateFetchDataSessionHandler : NSObject <NSURLSessionDataDelegate> {
    struct unique_ptr<Backend::Google::FetchThreatListUpdatesResponseParser, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> { struct __compressed_pair<Backend::Google::FetchThreatListUpdatesResponseParser *, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> { struct FetchThreatListUpdatesResponseParser *__value_; } __ptr_; } _parser;
    struct shared_ptr<ByteProvider> { struct ByteProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _byteProvider;
    unsigned long long _receivedBytes;
    NSError *_error;
    int _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id).cxx_construct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(void *)a0 provider:(int)a1;

@end
