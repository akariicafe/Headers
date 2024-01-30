@class NSString, NSMutableDictionary, NSMutableSet;
@protocol MFMailWebProcessProxy;

@interface MFWebViewDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    id<MFMailWebProcessProxy> _webProcessProxy;
    NSMutableSet *_changedKeys;
    BOOL _requiresResynchronization;
}

@property (readonly, nonatomic) NSString *javascriptName;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)setDictionary:(id)a0;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectEnumerator;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allKeysForObject:(id)a0;
- (unsigned long long)hash;
- (id)allValues;
- (id)init;
- (id)allKeys;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (void)_setRequiresSynchronization;
- (void)_updateRemoteInstance;
- (void)registerWithWebView:(id)a0 javascriptName:(id)a1;

@end
