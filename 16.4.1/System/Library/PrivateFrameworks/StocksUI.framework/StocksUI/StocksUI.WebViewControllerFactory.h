@interface StocksUI.WebViewControllerFactory : NSObject <NUWebViewControllerFactoryType> {
    void /* unknown type, empty encoding */ navigator;
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ sceneStateManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)createViewControllerForURL:(id)a0;

@end
