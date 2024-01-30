@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (void)addValue:(unsigned short)a0;
- (unsigned short)countForValue:(unsigned short)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)dictionary;
- (void)dealloc;
- (unsigned long long)uniqueValueCount;

@end
