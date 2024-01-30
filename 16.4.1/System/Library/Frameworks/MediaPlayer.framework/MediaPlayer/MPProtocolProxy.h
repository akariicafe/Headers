@class NSHashTable, Protocol;

@interface MPProtocolProxy : NSProxy

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *objects;

+ (id)proxyForObjects:(id)a0 protocol:(id)a1;
+ (id)proxyForObject:(id)a0 protocol:(id)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
