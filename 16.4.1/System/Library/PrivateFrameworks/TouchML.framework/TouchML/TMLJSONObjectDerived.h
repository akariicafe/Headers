@class NSString, TMLJSONObject;

@interface TMLJSONObjectDerived : TMLJSONObject {
    TMLJSONObject *_parent;
    NSString *_keyPath;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)valueForKeyPath:(id)a0;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id)rawJSON;
- (id)initWithParent:(id)a0 keyPath:(id)a1;
- (void)setRawJSON:(id)a0;
- (void)tmlAddObserver:(id)a0 forKeyPath:(id)a1 callback:(id /* block */)a2;
- (void)tmlRemoveObserver:(id)a0 forKeyPath:(id)a1;

@end
