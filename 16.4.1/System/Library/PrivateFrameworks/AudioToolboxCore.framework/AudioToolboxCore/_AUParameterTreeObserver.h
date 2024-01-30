@interface _AUParameterTreeObserver : NSObject

@property (copy, nonatomic) id /* block */ callback;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
