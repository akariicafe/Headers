@interface _NSSharedKeySetS : NSObject <NSCopying>

@property char *g;
@property unsigned char select;
@property void *rankTable;
@property double c;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int *seeds;
@property unsigned short[1] *keys1;
@property unsigned short[2] *keys2;
@property unsigned short[3] *keys3;
@property unsigned char[3] *ckeys;
@property unsigned int keyLen;
@property unsigned int type;
@property (retain) _NSSharedKeySetS *subSharedKeySet;

- (char *)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)indexForKey:(unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithKeys:(void **)a0 keyLenghtInBytes:(unsigned int)a1 count:(unsigned int)a2 type:(unsigned int)a3;
- (unsigned long long)indexForBytes:(char *)a0 length:(unsigned long long)a1;
- (unsigned short *)keyAtIndex:(unsigned long long)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned int)maximumIndex;
- (unsigned long long)hash;
- (unsigned int)keySetCount;
- (id)allKeys;
- (BOOL)isEqual:(id)a0;
- (unsigned int)count;

@end
