@class NSURL, NSMutableDictionary;

@interface CLSSocialService : NSObject {
    NSMutableDictionary *_proxy;
}

@property (readonly) unsigned long long intent;
@property (copy) NSURL *proxyURL;

+ (id)defaultFileName;
+ (id)socialService;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateMemoryCaches;
- (id)initWithProxyAtURL:(id)a0 andIntent:(unsigned long long)a1;
- (id)proxiedValueForKey:(id)a0;
- (void)setProxiedValue:(id)a0 forKey:(id)a1;
- (BOOL)flushProxy;
- (void)updateProxy;

@end
