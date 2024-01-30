@class NSMapTable;

@interface HDIdentifierTable : NSObject

@property (retain, nonatomic) NSMapTable *map;
@property (nonatomic) unsigned long long nextIdentifier;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectWithIdentifier:(unsigned long long)a0;
- (id)objectWithIdentifier:(unsigned long long)a0;

@end
