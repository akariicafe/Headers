@class NSURLRequest, NSURLProtocolInternal, NSCachedURLResponse;
@protocol NSURLProtocolClient;

@interface NSURLProtocol : NSObject {
    NSURLProtocolInternal *_internal;
}

@property (readonly, retain) id<NSURLProtocolClient> client;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSCachedURLResponse *cachedResponse;

+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0 task:(id)a1;
+ (Class)_protocolClassForRequest:(id)a0 skipAppSSO:(BOOL)a1;
+ (id)propertyForKey:(id)a0 inRequest:(id)a1;
+ (Class)_protocolClassForRequest:(id)a0;
+ (void)setProperty:(id)a0 forKey:(id)a1 inRequest:(id)a2;
+ (void)removePropertyForKey:(id)a0 inRequest:(id)a1;
+ (BOOL)canInitWithTask:(id)a0;
+ (void)unregisterClass:(Class)a0;
+ (BOOL)registerClass:(Class)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)initWithTask:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)init;
- (void)dealloc;
- (void)stopLoading;

@end
