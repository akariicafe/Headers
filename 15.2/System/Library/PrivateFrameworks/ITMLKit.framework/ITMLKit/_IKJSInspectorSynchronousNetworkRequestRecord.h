@class NSDate, NSString, _IKJSInspectorNetworkLoader, NSDictionary, NSURLResponse, NSURLRequest, NSData;

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {
    NSDate *_redirectEndTime;
    BOOL _isRedirecting;
    NSDate *_startTime;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) _IKJSInspectorNetworkLoader *loader;
@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) long long initiatorType;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) NSDictionary *timingData;
@property (copy, nonatomic, getter=urlRequest) NSURLRequest *URLRequest;
@property (copy, nonatomic, getter=urlResponse) NSURLResponse *URLResponse;
@property (copy, nonatomic) NSData *responseBodyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_protocolResourceTypeForType:(long long)a0;
+ (long long)_responseSourceTypeForCacheType:(long long)a0;

- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveData:(id)a0;
- (void)willSendRequest:(id)a0;
- (void)willSendRequest:(id)a0 redirectResponse:(id)a1;
- (id)initWithIdentifier:(id)a0 loader:(id)a1 resourceType:(long long)a2 initiatorType:(long long)a3;
- (void)_processEventType:(long long)a0;
- (void)_dispatchEvent:(long long)a0 block:(id /* block */)a1;
- (void)didCompleteLoadingFromCache:(long long)a0 mimeType:(id)a1 withResponseBody:(id)a2;
- (void)didCompleteLoadingFromCache:(long long)a0 withResponseBodyBlock:(id /* block */)a1;
- (void)_didCompleteLoadingFromCache:(long long)a0 mimeType:(id)a1 withResponseBody:(id)a2 timestamp:(double)a3;
- (void)didReceiveResponse:(id)a0 timingData:(id)a1;
- (void)didCompleteLoadingFromMemoryWithRequest:(id)a0 response:(id)a1 withResponseBodyBlock:(id /* block */)a2;
- (void)didCompleteLoadingWithResponseBody:(id)a0;
- (void)didCompleteLoadingFromCache:(long long)a0 withResponseBody:(id)a1 mimeType:(id)a2;

@end
