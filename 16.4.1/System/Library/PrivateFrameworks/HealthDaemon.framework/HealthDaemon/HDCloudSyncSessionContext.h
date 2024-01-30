@class _HKArchiveCreator, HDSyncAnchorRangeMap, HDProfile, NSURL, NSProgress, NSString, NSMutableSet;

@interface HDCloudSyncSessionContext : NSObject <NSProgressReporting> {
    NSMutableSet *_syncEntityClassesWithProcessedChanges;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) _HKArchiveCreator *archiveCreator;
@property (readonly, copy, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *pendingAnchorRangeMap;
@property (nonatomic) unsigned long long changesetCount;
@property (nonatomic) unsigned long long archiveCount;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL hasOpenSequence;
@property (readonly, nonatomic) unsigned long long archiveSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addChangeData:(id)a0 changes:(id)a1 sessionIdentifier:(id)a2 outError:(id *)a3;
- (void)finishProgress;
- (id)initWithChangedSyncEntityCount:(unsigned long long)a0 profile:(id)a1;
- (BOOL)resetInvalidArchiveCreatorWithSessionUUID:(id)a0 error:(id *)a1;

@end
