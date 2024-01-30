@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (id)dictionary;
- (void)addValue:(unsigned short)a0;
- (unsigned short)countForValue:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (id)init;
- (unsigned long long)uniqueValueCount;
- (id)description;
- (void).cxx_destruct;

@end
