@interface _PASBloomFilterHashArray : NSObject {
    unsigned long long _size;
    int *_data;
}

@property (readonly, nonatomic) int *hashes;

- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;

@end
