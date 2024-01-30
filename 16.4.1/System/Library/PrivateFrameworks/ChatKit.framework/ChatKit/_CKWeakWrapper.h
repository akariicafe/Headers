@class IMWeakReference;

@interface _CKWeakWrapper : NSProxy

@property (retain, nonatomic) IMWeakReference *weakReference;
@property (retain, nonatomic) Class targetClass;

- (id)initWithObject:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
