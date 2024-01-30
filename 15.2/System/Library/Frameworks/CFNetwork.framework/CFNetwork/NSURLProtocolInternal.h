@class NSURLRequest, NSCachedURLResponse;
@protocol NSURLProtocolClient;

@interface NSURLProtocolInternal : NSObject {
    id<NSURLProtocolClient> client;
    NSURLRequest *request;
    NSCachedURLResponse *cachedResponse;
}

- (void)dealloc;

@end
