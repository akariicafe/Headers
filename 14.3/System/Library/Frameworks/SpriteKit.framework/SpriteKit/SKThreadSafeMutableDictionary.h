@class NSMutableDictionary;

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _storageLock;
    NSMutableDictionary *_storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithNSMutableDictionary:(id)a0;

@end
