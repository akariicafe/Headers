@class NSString, NSObject;

@interface SVKeyValueObserver : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, weak, nonatomic) NSObject *object;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id /* block */ change;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithKeyPath:(id)a0 ofObject:(id)a1 withOptions:(unsigned long long)a2 change:(id /* block */)a3;

@end
