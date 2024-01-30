@class NSMutableArray, NSMutableIndexSet;

@interface SXDataTableDictionary : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (retain, nonatomic) NSMutableIndexSet *indexes;
@property (retain, nonatomic) NSMutableArray *storage;

+ (id)dataTableDictionaryWithRows:(unsigned long long)a0 andColumns:(unsigned long long)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeAllObjects;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)indexForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct { unsigned long long x0; unsigned long long x1; })indexPathForIndex:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; })indexPathOfObject:(id)a0;
- (id)arrayWithObject:(id)a0 forCount:(unsigned long long)a1;
- (id)initWithRows:(unsigned long long)a0 andColumns:(unsigned long long)a1;
- (id)objectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeObjectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (void)setObject:(id)a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;

@end
