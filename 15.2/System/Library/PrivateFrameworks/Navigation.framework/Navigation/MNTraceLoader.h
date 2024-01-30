@class MNTrace;

@interface MNTraceLoader : NSObject {
    MNTrace *_trace;
}

- (id)trace;
- (void).cxx_destruct;
- (id)loadTraceWithPath:(id)a0 outError:(out id *)a1;
- (id)loadTraceWithPath:(id)a0 options:(unsigned long long)a1 outError:(out id *)a2;
- (BOOL)_loadTraceVersion;
- (BOOL)_updateTraceFromVersion:(unsigned long long)a0 outError:(id *)a1;
- (BOOL)_loadInfoTable;
- (BOOL)_loadLocationsTable:(BOOL)a0;
- (BOOL)_loadDirectionsTable;
- (BOOL)_loadETAUpdatesTable;
- (BOOL)_loadCompassHeadingDataTable;
- (BOOL)_loadMotionDataTable;
- (BOOL)_loadVehicleDataTable;
- (BOOL)_loadEVDataTable;
- (BOOL)_loadNavigationEventsTable;
- (BOOL)_loadAnnotatedUserBehaviorTable;
- (BOOL)_loadAnnotatedUserEnvironmentTable;
- (BOOL)_loadMiscInfo;
- (BOOL)loadExtraData;
- (BOOL)_executeQuery:(id)a0 rowHandler:(id /* block */)a1;
- (BOOL)_tableExists:(id)a0;
- (id)_handleUpdateError;

@end
