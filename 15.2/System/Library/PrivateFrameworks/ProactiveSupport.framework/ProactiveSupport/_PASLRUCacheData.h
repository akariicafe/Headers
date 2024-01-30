@class NSMutableDictionary, NSMutableArray;

@interface _PASLRUCacheData : NSObject {
    NSMutableDictionary *items;
    NSMutableArray *keysMRU;
}

- (id)initWithCountLimit:(unsigned long long)a0;
- (void).cxx_destruct;

@end
