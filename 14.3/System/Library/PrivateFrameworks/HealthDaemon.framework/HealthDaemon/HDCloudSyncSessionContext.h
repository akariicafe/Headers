@class NSError, NSString, NSURL, _HKArchiveCreator, HDSyncAnchorRangeMap, HDProfile, NSProgress, NSMutableSet;

@interface HDCloudSyncSessionContext : NSObject <NSProgressReporting> {
    NSMutableSet *_syncEntityClassesWithProcessedChanges;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) _HKArchiveCreator *archiveCreator;
@property (readonly, copy, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *pendingAnchorRangeMap;
@property (nonatomic) unsigned long long changesetCount;
@property (nonatomic) unsigned long long archiveCount;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL hasOpenSequence;
@property (readonly, nonatomic) unsigned long long archiveSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_assetFileHandleForArchiveURL:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (BOOL)_updateAnchorRangeMap:(id)a0 withChange:(id)a1 outError:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)finishProgress;
- (id)initWithChangedSyncEntityCount:(unsigned long long)a0 profile:(id)a1;
- (BOOL)resetInvalidArchiveCreatorWithSessionUUID:(id)a0 error:(id *)a1;
- (BOOL)addChangeData:(id)a0 changes:(id)a1 sessionIdentifier:(id)a2 outError:(id *)a3;

@end
