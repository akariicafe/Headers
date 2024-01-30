@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short> > > { struct pair<unsigned short, unsigned short> *x0; struct pair<unsigned short, unsigned short> *x1; struct __compressed_pair<std::__1::pair<unsigned short, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned short> > > { struct pair<unsigned short, unsigned short> *x0; } x2; } *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (void)addValue:(unsigned short)a0;
- (unsigned short)countForValue:(unsigned short)a0;
- (void)_vectorEnumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (BOOL)isEqualToU16CountedSet:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (id)description;
- (unsigned long long)uniqueValueCount;
- (BOOL)isEqual:(id)a0;
- (void)_convertToDictionaryRepresentation;
- (void)_dictEnumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
