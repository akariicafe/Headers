@class NSMutableDictionary;

@interface TSCH3DDictionaryOfDictionary : NSObject {
    NSMutableDictionary *mDictionary;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setObject:(id)a0 forFirstLevelKey:(id)a1 secondLevelKey:(id)a2;
- (id)objectForFirstLevelKey:(id)a0 secondLevelKey:(id)a1;
- (void)removeObjectForFirstLevelKey:(id)a0 secondLevelKey:(id)a1;
- (void)addEntriesFromDictionaryOfDictionary:(id)a0;

@end
