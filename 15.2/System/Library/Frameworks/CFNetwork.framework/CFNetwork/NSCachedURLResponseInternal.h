@class NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponseInternal : NSObject {
    NSURLResponse *response;
    NSData *data;
    NSDictionary *userInfo;
    unsigned long long storagePolicy;
    struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *_cachedURLResponse;
}

- (void)dealloc;

@end
