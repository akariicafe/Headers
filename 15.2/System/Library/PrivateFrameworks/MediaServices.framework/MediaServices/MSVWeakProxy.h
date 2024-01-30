@class Protocol;

@interface MSVWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id object;
@property (readonly, nonatomic) Protocol *protocol;

+ (id)proxyWithObject:(id)a0 protocol:(id)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;

@end
