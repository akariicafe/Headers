@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject {
    NSDictionary *_cachedValues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _valueLock;
    BOOL _cachedValuesAreComplete;
    BOOL _keysAreCompacted;
}

@property (readonly, copy, nonatomic) NSSet *keys;
@property (retain) NSDictionary *completeDictionary;

- (void).cxx_destruct;
- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (id)initWithKeys:(id)a0 compacted:(BOOL)a1;
- (BOOL)hasValueForKey:(id)a0;
- (id)debugDescription;
- (id)cachedValueForKey:(id)a0;

@end
