@class NSString, NSURLResponse, NSOperationQueue, NSMutableData, NSURLConnection;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest> {
    NSOperationQueue *_queue;
    id /* block */ _handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
    id _lifetimeExtender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)sendRequest;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
