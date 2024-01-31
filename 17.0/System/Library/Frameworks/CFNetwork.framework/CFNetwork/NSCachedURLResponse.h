@class NSDictionary, NSData, NSURLResponse, NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSCachedURLResponseInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURLResponse *response;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long storagePolicy;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_wrappedRequest;
- (id)initWithResponse:(id)a0 data:(id)a1 userInfo:(id)a2 storagePolicy:(unsigned long long)a3;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)_CFCachedURLResponse;
- (void)_deallocInternalCFCachedURLResponse;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)a0;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)a0;
- (id)dataArray;
- (id)initWithResponse:(id)a0 data:(id)a1;
- (id)initWithResponse:(id)a0 dataArray:(id)a1 userInfo:(id)a2 storagePolicy:(unsigned long long)a3;

@end
