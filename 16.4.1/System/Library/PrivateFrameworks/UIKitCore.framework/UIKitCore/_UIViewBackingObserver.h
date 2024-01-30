@interface _UIViewBackingObserver : NSObject

@property (copy, nonatomic) id /* block */ observerBlock;

+ (id)sharedObserver;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)observe:(id)a0 forKeyPath:(id)a1 once:(id /* block */)a2;

@end
