@class UIViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader {
    UIViewController *_extensionViewController;
}

- (void).cxx_destruct;
- (id)remoteViewController;
- (BOOL)_setupSessionIfNeeded:(id *)a0;
- (void)_setupSessionWithExtension:(id)a0 completion:(id /* block */)a1;

@end
