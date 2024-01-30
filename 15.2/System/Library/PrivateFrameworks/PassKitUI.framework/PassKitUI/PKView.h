@class NSHashTable;

@interface PKView : UIView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToWindow;
- (void)removeWindowObserver:(id)a0;
- (void)addWindowObserver:(id)a0;

@end
