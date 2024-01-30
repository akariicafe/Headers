@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject {
    NSSet *_keys;
    NSDictionary *_cachedValues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _valueLock;
    BOOL _cachedValuesAreComplete;
    BOOL _keysAreCompacted;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
