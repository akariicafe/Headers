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

+ (BOOL)_isPathMatchIdle:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0;
+ (BOOL)_shouldForceApplyMetadataForItem:(id)a0;

- (id)_generateGentlePhysicalBounceNameForPathMatch:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0 dirfd:(int)a1 existingSourceLogicalName:(id)a2 lastBounceNo:(unsigned long long *)a3;
- (BOOL)applyLocalEditIfNecessaryToURL:(id)a0 forItem:(id)a1 serverItem:(id)a2 forDelete:(BOOL)a3 error:(id *)a4;
- (void)_stageCreationOfSymlink:(id)a0 forLocalItem:(id)a1;
- (BOOL)_shouldBounceSourceItemWithLookup:(id)a0 localItem:(id)a1 serverItem:(id)a2 bounceNamespace:(unsigned char)a3 urlMatch:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a4;
- (void)writeUnderCoordinationFromURL:(id)a0 toURL:(id)a1 canDelete:(BOOL)a2;
- (void)suspend;
- (void)_handleClashingItemIfNecessary:(id)a0 parentID:(id)a1 si:(id)a2;
- (void)_applyChangesForServerAlias:(id)a0 localAlias:(id)a1 jobID:(long long)a2 zone:(id)a3 diffs:(unsigned long long)a4;
- (BOOL)bouncePathMatch:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0 toApplyServerItem:(id)a1 clientZone:(id)a2;
- (void)cancel;
- (id)bouncePath:(id)a0 forItemConflictingWithAnFSRoot:(id)a1;
- (void)close;
- (int)_computeURLMatchWithLookup:(id)a0 localItem:(id)a1 serverItem:(id)a2 bounceNamespace:(unsigned char)a3 applyNamespace:(unsigned char)a4 urlMatch:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a5;
- (unsigned int)_computeDesiredVersionOptionsForDocument:(id)a0 createdReservedItem:(BOOL)a1;
- (void)_stageCreationOfDirectory:(id)a0;
- (void)_scheduleActionCoordination:(id)a0 dstURL:(id)a1 action:(const char *)a2 li:(id)a3 si:(id)a4 diffs:(unsigned long long)a5 hasFinished:(BOOL *)a6;
- (id)initWithAccountSession:(id)a0;
- (void)_writeUnderCoordinationFromURL:(id)a0 toURL:(id)a1 canDelete:(BOOL)a2;
- (unsigned long long)computeSourceBounceNumberIfNecessaryWithLookup:(id)a0 localItem:(id)a1 serverItem:(id)a2;
- (void)applyChangesForServerItem:(id)a0 localItem:(id)a1 rank:(long long)a2 zone:(id)a3 activity:(id)a4 hasFinished:(BOOL *)a5;
- (void).cxx_destruct;
- (BOOL)bouncePathMatchesForLookup:(id)a0 toApplyServerItem:(id)a1 clientZone:(id)a2;
- (void)resume;

@end
