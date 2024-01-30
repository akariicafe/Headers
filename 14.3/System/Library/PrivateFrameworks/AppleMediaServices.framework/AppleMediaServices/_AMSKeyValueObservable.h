@class NSString, NSObject;

@interface _AMSKeyValueObservable : AMSObservable

@property (retain, nonatomic) NSObject *context;
@property (copy, nonatomic) NSString *keyPath;
@property (weak, nonatomic) NSObject *object;

- (BOOL)cancel;
- (void).cxx_destruct;
- (BOOL)sendCompletion;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;

@end
