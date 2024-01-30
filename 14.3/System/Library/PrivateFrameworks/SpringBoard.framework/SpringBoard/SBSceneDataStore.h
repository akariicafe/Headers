@class NSString, NSMutableDictionary;

@interface SBSceneDataStore : NSObject {
    NSMutableDictionary *_archivedObjectCache;
    id /* block */ _handler;
}

@property (readonly, nonatomic, getter=_data) NSMutableDictionary *data;
@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 data:(id)a1 changeHandler:(id /* block */)a2;
- (id)unarchivedObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_invalidate;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)_invokeChangeHandler;

@end
