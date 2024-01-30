@class NSMapTable, NSMutableArray;

@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
    NSMutableArray *_strongRefs;
}

+ (id)cache;

- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (id)objectForKey:(unsigned int)a0;
- (void)removeAllObjects;
- (id)init;
- (void).cxx_destruct;

@end
