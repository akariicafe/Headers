@interface IMSingletonProxy : NSProxy {
    id _singleton;
    id _singletonOverride;
    Class _overrideClass;
}

+ (void)load;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)__isSingletonProxy__im;
- (id)initWithSingleton:(id)a0 singletonOverride:(id)a1;
- (id)singletonOverrideRef;
- (void)setSingletonOverride:(id)a0;
- (id)singletonRef;

@end
