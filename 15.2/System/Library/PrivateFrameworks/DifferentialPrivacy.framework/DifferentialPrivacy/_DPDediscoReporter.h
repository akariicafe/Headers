@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)a0;

- (BOOL)reportDediscoRecords:(id)a0;
- (BOOL)reportDediscoKeys:(id)a0 storage:(id)a1;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (id)keysWithDefaultValues;
- (id)directlyUploadDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)defaultRecordsWithValues:(id)a0 key:(id)a1 properties:(id)a2;
- (id)reportToDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;

@end
