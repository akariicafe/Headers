@class NSString;

@interface SFKeyPair_Ivars : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *secKey;
    NSString *privateKeyDomain;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
