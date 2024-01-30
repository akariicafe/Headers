@class NSDictionary, HMBLocalZone;

@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator

@property (readonly, nonatomic) unsigned long long zoneRow;
@property (readonly, nonatomic) int zoneRowBindOffset;
@property (readonly, nonatomic) NSDictionary *arguments;
@property (readonly, weak, nonatomic) HMBLocalZone *localZone;

+ (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 arguments:(id)a1 zoneBindRowOffset:(int)a2 zoneRow:(unsigned long long)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 statement:(id)a1 initialSequence:(id)a2 arguments:(id)a3 maximumRowsPerSelect:(unsigned long long)a4;

@end
