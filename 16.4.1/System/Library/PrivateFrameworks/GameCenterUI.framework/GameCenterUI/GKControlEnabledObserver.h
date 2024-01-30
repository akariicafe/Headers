@class UIControl;

@interface GKControlEnabledObserver : NSObject {
    UIControl *_control;
    id /* block */ _block;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithControl:(id)a0 block:(id /* block */)a1;

@end
