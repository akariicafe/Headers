@class NSString, AVWeakReference, NSObject, AVCallbackContextRegistry;
@protocol AVWeakObservable;

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    AVWeakReference *_weakReferenceToObject;
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;
    NSString *_keyPath;
    unsigned long long _options;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackDidFireWithChangeDictionary:(id)a0;
- (id)initWithCallbackContextRegistry:(id)a0 observer:(id)a1 object:(id)a2 keyPath:(id)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (void)dealloc;
- (void)start;
- (void)cancelCallbacks;

@end
