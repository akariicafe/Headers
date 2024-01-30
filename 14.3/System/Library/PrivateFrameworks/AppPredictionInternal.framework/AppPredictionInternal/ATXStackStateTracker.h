@class _PASLock, NSUserDefaults, NSString;

@interface ATXStackStateTracker : NSObject {
    _PASLock *_internalStateLock;
    NSUserDefaults *_defaults;
    NSString *_path;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)stackIsStale:(id)a0;
- (void)updateStackRotationEvents;
- (id)lastStackRotationEvent:(id)a0;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (id)layoutForLastStalenessRotation:(id)a0;
- (void)cleanupOldData;
- (id)initTrackerInDirectory:(id)a0;
- (BOOL)loadInternalState;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)stackCreationEvent:(id)a0;
- (void)coalescedPersistInternalState;
- (void)updateStackRotationEventsByQueryingBiome;
- (id)mergedPublisherWithBlendingAndUIStreams;
- (BOOL)persistInternalState;
- (id)dataFromDisk;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;

@end
