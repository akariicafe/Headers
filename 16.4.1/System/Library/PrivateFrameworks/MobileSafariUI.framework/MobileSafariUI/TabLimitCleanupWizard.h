@class BrowserController;

@interface TabLimitCleanupWizard : NSObject {
    BOOL _privateBrowsing;
    BrowserController *_browserController;
    id /* block */ _resultHandler;
}

- (void).cxx_destruct;
- (id)makeViewController;
- (id)_cleanupGroupForRange:(long long)a0;
- (id)_smallCleanupGroup;
- (id)initForPrivateBrowsing:(BOOL)a0 withBrowserController:(id)a1 resultHandler:(id /* block */)a2;

@end
