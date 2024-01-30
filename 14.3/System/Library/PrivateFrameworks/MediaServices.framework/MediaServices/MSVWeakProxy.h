@class Protocol;

@interface MSVWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id object;
@property (readonly, nonatomic) Protocol *protocol;

+ (id)proxyWithObject:(id)a0 protocol:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
