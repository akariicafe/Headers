@class MNTrace;

@interface MNTraceLoader : NSObject {
    MNTrace *_trace;
}

- (id)trace;
- (void).cxx_destruct;
- (BOOL)_loadAnnotatedUserBehaviorTable;
- (id)_errorWithCode:(long long)a0 errorDescriptionFormat:(id)a1;
- (BOOL)_executeQuery:(id)a0 rowHandler:(id /* block */)a1;
- (id)_handleUpdateError;
- (BOOL)_loadAnnotatedUserEnvironmentTable;
- (BOOL)_loadCompassHeadingDataTable;
- (BOOL)_loadDirectionsTableAllowDeprecatedProtocol:(BOOL)a0 outError:(out id *)a1;
- (BOOL)_loadETAUpdatesTable;
- (BOOL)_loadEVDataTable;
- (BOOL)_loadInfoTable;
- (BOOL)_loadLocationsTable:(BOOL)a0;
- (BOOL)_loadMiscInfo;
- (BOOL)_loadMotionDataTable;
- (BOOL)_loadNavigationEventsTable;
- (BOOL)_loadNavigationUpdatesTable;
- (BOOL)_loadTraceVersion;
- (BOOL)_loadVehicleDataTable;
- (BOOL)_tableExists:(id)a0;
- (BOOL)_updateTraceFromVersion:(unsigned long long)a0 outError:(id *)a1;
- (BOOL)loadExtraData;
- (id)loadTraceWithPath:(id)a0 options:(unsigned long long)a1 outError:(out id *)a2;
- (id)loadTraceWithPath:(id)a0 outError:(out id *)a1;

@end
