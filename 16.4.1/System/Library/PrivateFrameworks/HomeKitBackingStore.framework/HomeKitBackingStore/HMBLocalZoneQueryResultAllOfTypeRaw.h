@class NSString;

@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator

@property (readonly, nonatomic) unsigned long long returning;
@property (readonly, nonatomic) unsigned long long zoneRow;
@property (readonly, nonatomic) int zoneRowBindOffset;
@property (readonly, nonatomic) NSString *modelType;
@property (readonly, nonatomic) int modelTypeBindOffset;

- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithLocalZone:(id)a0 zoneRow:(unsigned long long)a1 modelType:(id)a2 returning:(unsigned long long)a3;

@end
