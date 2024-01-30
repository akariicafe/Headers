@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem {
    SGDWorkQueueItem *_workQueueItem;
    BOOL _highPriority;
}

- (void)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)markAsFailed;
- (BOOL)highPriority;
- (id)initWithWorkQueueItem:(id)a0 item:(id)a1 highPriority:(BOOL)a2 customPriorityCritera:(unsigned char)a3;

@end
