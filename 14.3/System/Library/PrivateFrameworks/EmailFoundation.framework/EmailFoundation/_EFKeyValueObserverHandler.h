@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <EFCancelable> {
    id _object;
    NSString *_keyPath;
    id /* block */ _block;
    BOOL _observing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithObject:(id)a0 keyPath:(id)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObservingWithOptions:(unsigned long long)a0;

@end
