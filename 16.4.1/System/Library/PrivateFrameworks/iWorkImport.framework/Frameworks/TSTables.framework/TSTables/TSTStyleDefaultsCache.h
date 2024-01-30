@class TSTTableInfo, TSUIntegerKeyDictionary;

@interface TSTStyleDefaultsCache : NSObject

@property (nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSUIntegerKeyDictionary *cellStyleHandles;
@property (retain, nonatomic) TSUIntegerKeyDictionary *textStyleHandles;

+ (id)cacheWithTableInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithTableInfo:(id)a0;
- (id)cellStyleHandleForKey:(unsigned long long)a0;
- (id)textStyleHandleForKey:(unsigned long long)a0;

@end
