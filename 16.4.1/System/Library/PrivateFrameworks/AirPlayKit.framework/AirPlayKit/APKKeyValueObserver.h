@class NSString;

@interface APKKeyValueObserver : NSObject

@property (readonly, nonatomic) id observeredObject;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithObservedObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 changeHandler:(id /* block */)a3;

@end
