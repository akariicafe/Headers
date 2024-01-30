@class NSString, TPPageController;

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {
    TPPageController *_pageController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (void).cxx_destruct;
- (id)initWithPageController:(id)a0;
- (void)dealloc;
- (void)pageController:(id)a0 didLayOutPageAtIndex:(unsigned long long)a1 sectionIndex:(unsigned long long)a2 syncing:(BOOL)a3;

@end
