@class NSURL, NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {
    NSArray *_overrides;
    id /* block */ _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

@property (class, readonly, copy) NSURL *overrideDirectoryURL;

+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(id /* block */)a0;
+ (void)addOverride:(id)a0;
+ (void)removeOverride:(id)a0;

- (void)finish;
- (void)callNextOverrides;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithOverrides:(id)a0 noSuitableModuleFoundHandler:(id /* block */)a1;

@end
