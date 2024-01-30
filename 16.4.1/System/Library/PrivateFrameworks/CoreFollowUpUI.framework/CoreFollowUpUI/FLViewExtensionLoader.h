@class UIViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader {
    UIViewController *_extensionViewController;
}

- (id)remoteViewController;
- (void).cxx_destruct;
- (BOOL)_setupSessionIfNeeded:(id *)a0;
- (void)_setupSessionWithExtension:(id)a0 completion:(id /* block */)a1;

@end
