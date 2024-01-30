@class IMWeakReference;

@interface _CKWeakWrapper : NSProxy

@property (retain, nonatomic) IMWeakReference *weakReference;
@property (retain, nonatomic) Class targetClass;

- (Class)class;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
