@class Protocol;

@interface MRWeakProxy : NSObject

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Protocol *protocol;

+ (id)weakProxyWithObject:(id)a0 protocol:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
