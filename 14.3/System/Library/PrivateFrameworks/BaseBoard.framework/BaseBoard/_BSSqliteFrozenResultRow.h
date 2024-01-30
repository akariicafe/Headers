@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (id)keyAtIndex:(unsigned long long)a0;
- (long long)integerAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (id)stringAtIndex:(unsigned long long)a0;
- (id)dataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
