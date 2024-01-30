@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {
    struct _CFURLConnection { } *_connection;
    struct __CFError { } *_error;
}

@property (weak, nonatomic) AVAssetCustomURLBridgeForNSURLProtocol *bridge;
@property (nonatomic) struct _CFURLConnection { } *connection;

- (void)dealloc;
- (void).cxx_destruct;

@end
