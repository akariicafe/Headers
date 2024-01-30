@interface AMDStorage : NSObject

+ (unsigned int)saveRecordsToCoreData:(id)a0 inTable:(id)a1 error:(id *)a2;
+ (unsigned int)deleteRecordsFrom:(id)a0 usingPredicates:(id)a1 error:(id *)a2;
+ (unsigned int)deleteCoreDataRecordsFrom:(id)a0 usingPredicates:(id)a1 error:(id *)a2;
+ (id)fetchRecordsFrom:(id)a0 error:(id *)a1;
+ (id)fetchCoreDataRecordsFrom:(id)a0 error:(id *)a1;
+ (unsigned int)saveRecords:(id)a0 inTable:(id)a1 error:(id *)a2;

@end
