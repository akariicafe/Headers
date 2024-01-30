@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator

@property (readonly, nonatomic) unsigned long long returning;
@property (readonly, nonatomic) unsigned long long zoneRow;
@property (readonly, nonatomic) int zoneRowBindOffset;

- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithSQLContext:(id)a0 zoneRow:(unsigned long long)a1 returning:(unsigned long long)a2;

@end
