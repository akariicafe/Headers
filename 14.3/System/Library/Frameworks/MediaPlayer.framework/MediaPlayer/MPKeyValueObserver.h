@class NSString;

@interface MPKeyValueObserver : NSObject

@property (readonly, weak, nonatomic) id object;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;

@end
