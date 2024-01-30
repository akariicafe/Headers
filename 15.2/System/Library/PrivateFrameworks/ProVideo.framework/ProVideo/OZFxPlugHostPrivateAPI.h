@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate> {
    void *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlugin:(void *)a0;
- (float)blendingGamma;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (BOOL)navigateToTime:(union { double x0; struct *x1; })a0;
- (BOOL)giveEffectUIFocus;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundle:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithIdentifier:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithURL:(id)a3;
- (void)pluginXPCConnectionBroken:(id)a0;

@end
