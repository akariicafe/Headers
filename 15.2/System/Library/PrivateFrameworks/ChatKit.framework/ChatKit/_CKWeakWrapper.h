@class IMWeakReference;

@interface _CKWeakWrapper : NSProxy

@property (retain, nonatomic) IMWeakReference *weakReference;
@property (retain, nonatomic) Class targetClass;

- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:(SEL)a0;

@end
