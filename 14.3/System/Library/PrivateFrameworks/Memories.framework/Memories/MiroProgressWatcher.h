@interface MiroProgressWatcher : NSObject

@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) float progress;
@property (retain, nonatomic) id observedObject;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObservedObject:(id)a0;

@end
