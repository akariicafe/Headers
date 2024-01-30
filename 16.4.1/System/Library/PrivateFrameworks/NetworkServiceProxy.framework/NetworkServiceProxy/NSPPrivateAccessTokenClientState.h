@class NSData;

@interface NSPPrivateAccessTokenClientState : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_clientKey;
    NSData *_clientSecret;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
