@class NSString;

@interface TSUKeyValueObserver : NSObject {
    id _target;
    NSString *_keyPath;
    id /* block */ _changeHandler;
}

+ (id)observerWithTarget:(id)a0 keyPath:(id)a1 changeHandler:(id /* block */)a2;
+ (id)observerWithTarget:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 changeHandler:(id /* block */)a3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 changeHandler:(id /* block */)a3;

@end
