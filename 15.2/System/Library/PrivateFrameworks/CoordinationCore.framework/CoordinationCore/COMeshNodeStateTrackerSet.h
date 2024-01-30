@class NSDictionary;

@interface COMeshNodeStateTrackerSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSDictionary *trackers;

- (void)removeAllNodeStateTrackers;
- (void)removeNodeStateTrackerForNode:(id)a0;
- (void)enumerateNodeStateTrackersUsingBlock:(id /* block */)a0;
- (id)description;
- (void)addNodeStateTracker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateNodeStateTrackersOfStatus:(long long)a0 usingBlock:(id /* block */)a1;
- (id)nodeStateTrackersWithStatus:(long long)a0;
- (void)setNodeDormant:(id)a0 withState:(unsigned long long)a1 error:(id)a2;
- (id)nodeStateTrackerForNode:(id)a0;
- (void)_withLock:(id /* block */)a0;

@end
