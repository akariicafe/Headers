@interface IMSingletonProxy : NSProxy {
    id _singleton;
    id _singletonOverride;
    Class _overrideClass;
}

+ (void)load;

- (id)singletonRef;
- (BOOL)__isSingletonProxy__im;
- (id)initWithSingleton:(id)a0 singletonOverride:(id)a1;
- (id)singletonOverrideRef;
- (void)setSingletonOverride:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
