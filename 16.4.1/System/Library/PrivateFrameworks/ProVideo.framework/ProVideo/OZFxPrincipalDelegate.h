@interface OZFxPrincipalDelegate : NSObject <FxPlugPrincipalDelegate> {
    void *_plugin;
}

- (id)initWithPlugin:(void *)a0;
- (id)fxServiceProxy;

@end
