@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (void)willFinishLaunching;
- (void)didFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;

@end
