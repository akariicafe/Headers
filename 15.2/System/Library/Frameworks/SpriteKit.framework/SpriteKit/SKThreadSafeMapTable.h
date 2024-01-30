@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _storageLock;
    NSMutableArray *_storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNSMapTable:(id)a0;

@end
