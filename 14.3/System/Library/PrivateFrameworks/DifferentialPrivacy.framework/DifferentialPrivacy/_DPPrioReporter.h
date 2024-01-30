@interface _DPPrioReporter : _DPReportGenerator

- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)reportPrioKeys:(id)a0 storage:(id)a1;
- (id)keysWithDefaultValues;
- (id)defaultRecordsWithValues:(id)a0 key:(id)a1 properties:(id)a2;
- (id)reportToPrioRecords:(id)a0 forKey:(id)a1 parameters:(id)a2 storage:(id)a3;
- (void)deleteRecordsForKey:(id)a0 storage:(id)a1;
- (id)jsonReportFromObject:(id)a0;
- (id)reportPrioRecords:(id)a0;

@end
