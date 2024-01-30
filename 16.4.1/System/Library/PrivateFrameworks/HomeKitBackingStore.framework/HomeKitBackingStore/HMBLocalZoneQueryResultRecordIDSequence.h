@class NSData, NSMutableSet;

@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult

@property (retain, nonatomic) NSData *currentSequenceAsData;
@property (retain, nonatomic) NSData *lastReturnedSequence;
@property (retain, nonatomic) NSMutableSet *returnedIDs;

- (id)nextObject;
- (void).cxx_destruct;
- (id)fetchRow:(id)a0 error:(id *)a1;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 currentSequence:(id)a1 error:(id *)a2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequenceColumn:(id *)a2 error:(id *)a3;
- (id)initWithLocalZone:(id)a0 statement:(id)a1 initialSequence:(id)a2 sequenceBindOffset:(unsigned long long)a3 arguments:(id)a4 maximumRowsPerSelect:(unsigned long long)a5;

@end
