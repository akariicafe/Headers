@interface _DPRecordQueryPredicates : NSObject

+ (void)initialize;
+ (id)entityForKey:(id)a0;
+ (id)predicateForKey:(id)a0;
+ (id)predicateForRecordsWithVersionMismatch;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForAllRecords;
+ (id)predicateForRecordsOlderThan:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKey:(id)a0;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 submitted:(BOOL)a2 matchReportVersion:(BOOL)a3;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 matchReportVersion:(BOOL)a2;
+ (id)predicateForRecordsNotSubmitted;
+ (id)predicateForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsInDateRangeStart:(id)a0 end:(id)a1;
+ (id)predicateForRecordsSubmittedForKey:(id)a0;
+ (id)predicateForRecordsMatchingKey:(id)a0;

@end
