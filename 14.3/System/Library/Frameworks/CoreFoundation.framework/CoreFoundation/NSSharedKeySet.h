@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding> {
    unsigned char _algorithmType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property char *g;
@property unsigned char select;
@property void *rankTable;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int *seeds;
@property id *keys;
@property (retain) NSSharedKeySet *subSharedKeySet;

+ (id)keySetWithKeys:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyAtIndex:(unsigned long long)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)maximumIndex;
- (unsigned long long)hash;
- (id)initWithKeys:(id *)a0 count:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)keySetCount;
- (id)allKeys;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (unsigned long long)count;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
