@class SGDHarvestQueueOnDisk;

@interface SGDHarvestQueueItemOnDisk : SGDHarvestQueueItem {
    SGDHarvestQueueOnDisk *_harvestQueue;
    int _fileId;
}

- (void)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)markAsFailed;
- (BOOL)highPriority;
- (id)initWithHarvestQueue:(id)a0 itemId:(long long)a1 fileId:(int)a2 item:(id)a3 fails:(int)a4 customPriorityCriteria:(unsigned char)a5 receivedOnPower:(BOOL)a6 receivedTime:(double)a7 storageReason:(int)a8;

@end
