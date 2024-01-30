@class NSMapTable;

@interface HDIdentifierTable : NSObject {
    NSMapTable *_map;
    unsigned long long _nextIdentifier;
}

- (void)removeAllObjects;
- (id)allObjects;
- (void).cxx_destruct;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)count;
- (void)removeObjectWithIdentifier:(unsigned long long)a0;
- (id)objectWithIdentifier:(unsigned long long)a0;

@end
