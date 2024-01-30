@class NSString, NSArray;

@interface TSTGroupValueTuple : TSKSosBase <NSCopying> {
    NSArray *_groupValues;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _groupValueUid;
    NSString *_combinedCanonicalKeysString;
}

@property (readonly, nonatomic) unsigned char numberOfLevels;
@property (readonly, nonatomic) NSString *combinedCanonicalKeysString;

+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUidForTuple:(id)a0 appendingTuple:(id)a1;

- (id)locale;
- (id)initWithValueArray:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUid;
- (id)groupValueTupleByAppendingValue:(id)a0;
- (void)updateWithDocumentRoot:(id)a0;
- (id)canonicalKeyStringAtLevel:(unsigned char)a0;
- (id)groupValueTupleByReplacingValue:(id)a0 atLevel:(unsigned char)a1;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)a0;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueAtLevel:(unsigned char)a0;
- (id)prefixTupleToLevel:(unsigned char)a0;
- (id)groupValueTupleByAppendingTuple:(id)a0;
- (id)groupValueTupleByMergingTuple:(id)a0 toLevel:(unsigned char)a1;
- (id)initWithTSCEValues:(const void *)a0 locale:(id)a1;

@end
