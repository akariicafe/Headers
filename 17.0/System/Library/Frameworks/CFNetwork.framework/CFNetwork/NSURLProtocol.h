@class NSURLSessionTask, NSCachedURLResponse, NSURLRequest, NSURLProtocolInternal;
@protocol NSURLProtocolClient;

@interface NSURLProtocol : NSObject {
    NSURLProtocolInternal *_internal;
    NSURLSessionTask *_task;
    BOOL _inInitWithTask;
}

@property (readonly, retain) id<NSURLProtocolClient> client;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSCachedURLResponse *cachedResponse;

+ (BOOL)registerClass:(Class)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithTask:(id)a0;
+ (id)propertyForKey:(id)a0 inRequest:(id)a1;
+ (void)removePropertyForKey:(id)a0 inRequest:(id)a1;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)a0;
+ (Class)_protocolClassForRequest:(id)a0;
+ (Class)_protocolClassForRequest:(id)a0 skipAppSSO:(BOOL)a1;
+ (id)canonicalRequestForRequest:(id)a0 task:(id)a1;
+ (void)setProperty:(id)a0 forKey:(id)a1 inRequest:(id)a2;
+ (void)unregisterClass:(Class)a0;

- (id)init;
- (void)stopLoading;
- (void)dealloc;
- (id)task;
- (void)startLoading;
- (id)initWithTask:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
