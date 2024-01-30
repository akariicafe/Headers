@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {
    NSSet *_excludedSyncStores;
}

@property (retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;

- (void).cxx_destruct;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0;
- (id)excludedSyncStores;
- (void)setExcludedSyncStores:(id)a0;

@end
