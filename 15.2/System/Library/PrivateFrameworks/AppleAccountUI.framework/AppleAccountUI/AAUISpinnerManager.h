@class UINavigationItem, NSMutableDictionary;

@interface AAUISpinnerManager : NSObject {
    NSMutableDictionary *_spinnerControllers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _controllersLock;
    UINavigationItem *_navItem;
}

- (void)stopNavigationSpinner;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNavigationItem:(id)a0;
- (void)startSpinnerInSpecifier:(id)a0 forKey:(id)a1;
- (void)stopAllSpinners;
- (void)startNavigationSpinner;
- (void)stopAnimatingForKey:(id)a0;

@end
