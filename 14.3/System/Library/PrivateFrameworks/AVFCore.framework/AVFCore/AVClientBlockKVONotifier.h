@class NSString, AVCallbackContextRegistry, NSObject;

@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection> {
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject *observedObject;

- (void)dealloc;
- (void)cancelCallbacks;
- (id)initWithCallbackContextRegistry:(id)a0 observer:(id)a1 object:(id)a2 keyPath:(id)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (void)start;
- (void)callbackDidFireWithChangeDictionary:(id)a0;

@end
