@class NSNumber, NSError, HMBSQLQueryStatement, NSMutableArray;

@interface HMBSQLQueryIterator : NSEnumerator

@property (class, nonatomic) unsigned long long maximumRowsPerSelect;

@property (readonly, nonatomic) HMBSQLQueryStatement *statement;
@property (readonly, nonatomic) unsigned long long maximumRowsPerQuery;
@property (retain, nonatomic) NSMutableArray *cachedResults;
@property (retain, nonatomic) NSNumber *currentSequence;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int sequenceBindOffset;

- (id)nextObject;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)fetchRow:(id)a0 error:(id *)a1;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithStatement:(id)a0 initialSequence:(id)a1 maximumRowsPerSelect:(unsigned long long)a2;
- (id)initWithStatement:(id)a0 initialSequence:(id)a1 maximumRowsPerSelect:(unsigned long long)a2 error:(id)a3;

@end
