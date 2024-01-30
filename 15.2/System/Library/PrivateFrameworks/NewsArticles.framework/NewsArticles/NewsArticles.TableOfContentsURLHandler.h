@interface NewsArticles.TableOfContentsURLHandler : NSObject <SXURLHandling, SXURLPreviewing> {
    void /* unknown type, empty encoding */ issue;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ viewController;
}

- (void)openURL:(id)a0;
- (id)viewControllerForURL:(id)a0;
- (void)commitViewController:(id)a0 URL:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
