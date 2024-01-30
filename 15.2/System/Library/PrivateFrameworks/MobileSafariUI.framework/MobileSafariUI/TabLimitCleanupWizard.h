@class BrowserController;

@interface TabLimitCleanupWizard : NSObject {
    BOOL _privateBrowsing;
    BrowserController *_browserController;
    id /* block */ _resultHandler;
}

- (void).cxx_destruct;
- (id)initForPrivateBrowsing:(BOOL)a0 withBrowserController:(id)a1 resultHandler:(id /* block */)a2;
- (id)makeViewController;
- (id)_smallCleanupGroup;
- (id)_cleanupGroupForRange:(long long)a0;

@end
