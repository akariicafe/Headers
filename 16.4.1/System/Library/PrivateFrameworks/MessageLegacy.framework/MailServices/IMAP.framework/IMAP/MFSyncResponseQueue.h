@interface MFSyncResponseQueue : MFBaseSyncResponseQueue {
    BOOL _shouldSyncFlags;
}

- (BOOL)addItem:(id)a0;
- (BOOL)shouldSyncFlags;

@end
