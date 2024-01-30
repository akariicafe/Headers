@class TSTTableDataStore, TSTTableDataListItemCache, TSUIntegerKeyDictionary, TSULocale;

@interface TSTTableDataListCache : NSObject

@property (retain, nonatomic) TSTTableDataStore *dataStore;
@property (retain, nonatomic) TSULocale *locale;
@property (retain, nonatomic) TSTTableDataListItemCache *formats;
@property (retain, nonatomic) TSTTableDataListItemCache *cellStyleHandles;
@property (retain, nonatomic) TSTTableDataListItemCache *textStyleHandles;
@property (retain, nonatomic) TSUIntegerKeyDictionary *strings;

+ (id)cacheWithDataStore:(id)a0;

- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (id)cellStyleHandleForKey:(unsigned int)a0;
- (id)formatForKey:(unsigned int)a0;
- (id)stringForKey:(unsigned int)a0 shouldWrap:(BOOL *)a1;
- (id)textStyleHandleForKey:(unsigned int)a0;

@end
