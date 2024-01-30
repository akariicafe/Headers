@class PLModelMigratorLog, NSString, NSProgress, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager, PLTimedPerfCheck;

@interface PLModelMigrationActionProcessor : NSObject <NSProgressReporting> {
    NSString *_uuid;
    NSString *_uuidTruncated;
    PLPhotoLibraryPathManager *_pathManager;
    long long _type;
    PLCoreAnalyticsEventManager *_analyticsEventManager;
    unsigned short _tag;
    double _token;
    double _lifetimeToken;
    PLTimedPerfCheck *_lifetimePerfCheck;
    int _pid;
}

@property (retain) NSProgress *progress;
@property (retain) PLModelMigratorLog *logger;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (nonatomic) BOOL ignoreProgressUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initialLog;
- (id)_generateActionMarkerBase;
- (id)_generateActionMarker;
- (id)_generateActionTagMarker;
- (id)_startLogEntryWithName:(id)a0;
- (void)_stopLogEntryWithPerfCheck:(id)a0;
- (id)_progressLogMessage;
- (void)_performActionWithName:(id)a0 ifRequired:(struct { BOOL x0; })a1 recordTimedCoreAnalyticsEvent:(id)a2 coreAnalyticsEventKey:(id)a3 block:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performActionWithName:(id)a0 ifRequired:(struct { BOOL x0; })a1 block:(id /* block */)a2;
- (id)initWithUUID:(id)a0 pathManager:(id)a1 migrationActionType:(long long)a2 analyticsEventManager:(id)a3 logger:(id)a4 progressUnitCount:(unsigned long long)a5;
- (void)performActionWithName:(id)a0 ifRequired:(struct { BOOL x0; })a1 recordTimedCoreAnalyticsEvent:(id)a2 coreAnalyticsEventKey:(id)a3 block:(id /* block */)a4;

@end
