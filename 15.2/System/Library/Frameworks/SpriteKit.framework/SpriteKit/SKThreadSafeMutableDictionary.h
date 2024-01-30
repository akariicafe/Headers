@class NSMutableDictionary;

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _storageLock;
    NSMutableDictionary *_storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNSMutableDictionary:(id)a0;

@end
