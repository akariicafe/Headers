@class BRCAccountSession, NSString, NSObject, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule> {
    _Atomic int _suspendCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) brc_task_tracker *taskTracker;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

+ (BOOL)_shouldForceApplyForItem:(id)a0;
+ (BOOL)_isPathMatchIdle:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0;

- (void)cancel;
- (void)close;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)initWithAccountSession:(id)a0;
- (void)applyChangesForServerItem:(id)a0 localItem:(id)a1 rank:(long long)a2 zone:(id)a3 activity:(id)a4 hasFinished:(BOOL *)a5;
- (BOOL)applyLocalEditIfNecessaryToURL:(id)a0 forItem:(id)a1 serverItem:(id)a2 forDelete:(BOOL)a3 error:(id *)a4;
- (BOOL)bouncePathMatchesForLookup:(id)a0 toApplyServerItem:(id)a1 clientZone:(id)a2;
- (void)fixupItemsAtStartup;
- (id)bouncePath:(id)a0 forItemConflictingWithAnFSRoot:(id)a1;
- (BOOL)bouncePathMatch:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0 toApplyServerItem:(id)a1 clientZone:(id)a2;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0 dirfd:(int)a1 lastBounceNo:(unsigned long long *)a2;
- (void)_applyChangesForServerAlias:(id)a0 localAlias:(id)a1 jobID:(long long)a2 zone:(id)a3 diffs:(unsigned long long)a4;
- (void)_stageCreationOfDirectory:(id)a0;
- (void)_stageCreationOfSymlink:(id)a0;
- (void)writeUnderCoordinationFromURL:(id)a0 toURL:(id)a1 canDelete:(BOOL)a2;
- (void)_writeUnderCoordinationFromURL:(id)a0 toURL:(id)a1 canDelete:(BOOL)a2;

@end
