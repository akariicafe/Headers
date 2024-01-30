@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {
    struct _CFURLConnection { } *_connection;
    struct __CFError { } *_error;
}

@property (weak, nonatomic) AVAssetCustomURLBridgeForNSURLProtocol *bridge;
@property (nonatomic) struct _CFURLConnection { } *connection;

- (void).cxx_destruct;
- (void)dealloc;

@end
