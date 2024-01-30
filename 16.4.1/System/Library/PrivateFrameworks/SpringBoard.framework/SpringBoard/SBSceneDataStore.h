@class NSString, NSMutableDictionary;

@interface SBSceneDataStore : NSObject {
    NSMutableDictionary *_archivedObjectCache;
    id /* block */ _handler;
}

@property (readonly, nonatomic, getter=_data) NSMutableDictionary *data;
@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_invokeChangeHandler;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (id)_initWithIdentifier:(id)a0 data:(id)a1 changeHandler:(id /* block */)a2;
- (id)unarchivedObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)_invalidate;
- (void).cxx_destruct;

@end
