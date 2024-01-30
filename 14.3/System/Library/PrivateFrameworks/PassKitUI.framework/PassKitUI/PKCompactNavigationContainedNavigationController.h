@class NSString, UIVisualEffectView, NSHashTable;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {
    UIVisualEffectView *_backdropView;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_observers;
- (void)loadView;
- (void)addContentContainerObserver:(id)a0;
- (void)removeContentContainerObserver:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
