@interface _NSSharedKeySetS : NSObject <NSCopying> {
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    unsigned short[1] *_keys1;
    unsigned short[2] *_keys2;
    unsigned short[3] *_keys3;
    unsigned char[3] *_ckeys;
    _NSSharedKeySetS *_subSharedKeySet;
    unsigned int _keyLen;
    unsigned int _type;
}

- (unsigned long long)indexForKey:(unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned long long)indexForBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
