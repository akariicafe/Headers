@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (void)_collectNanoSyncMessageDatabase;
- (id)_sortedPairedDevices;
- (void)_reportSummaryWithDevices:(id)a0;
- (void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)a0;
- (id)nanoSyncDatabaseURL;
- (id)_reportDetailsForDevice:(id)a0 database:(id)a1;
- (void)_reportIDSSummaryForDeviceIdentifier:(id)a0 database:(id)a1;
- (long long)_countOfMessagesForDeviceIdentifier:(id)a0 description:(id)a1 predicateSQL:(id)a2 date:(id)a3 database:(id)a4;
- (void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)a0 description:(id)a1 field:(id)a2 predicateSQL:(id)a3 database:(id)a4;
- (void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)a0 database:(id)a1;

@end
