@interface _DPPrioReporter : _DPReportGenerator

- (id)defaultRecordsWithValues:(id)a0 key:(id)a1 properties:(id)a2;
- (id)reportToPrioRecords:(id)a0 forKey:(id)a1 parameters:(id)a2 storage:(id)a3;
- (id)keysWithDefaultValues;
- (void)deleteRecordsForKey:(id)a0 storage:(id)a1;
- (id)reportPrioRecords:(id)a0;
- (id)jsonReportFromObject:(id)a0;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)reportPrioKeys:(id)a0 storage:(id)a1;

@end
