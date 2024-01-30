@protocol AMSBagProtocol;

@interface AMSNilBagValueFilteringProxy : NSProxy

@property (readonly, nonatomic) id<AMSBagProtocol> wrappedBag;

+ (id)proxyWithBag:(id)a0;

- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)_substituteNilIfNeededWithValue:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;

@end
