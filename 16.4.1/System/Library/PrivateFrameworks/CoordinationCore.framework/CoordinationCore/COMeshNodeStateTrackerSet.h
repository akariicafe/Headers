@class NSDictionary;

@interface COMeshNodeStateTrackerSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSDictionary *trackers;

- (void)_withLock:(id /* block */)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setNodeDormant:(id)a0 withState:(unsigned long long)a1 error:(id)a2;
- (void)addNodeStateTracker:(id)a0;
- (void)enumerateNodeStateTrackersOfStatus:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodeStateTrackersUsingBlock:(id /* block */)a0;
- (id)nodeStateTrackerForNode:(id)a0;
- (id)nodeStateTrackersWithStatus:(long long)a0;
- (void)removeAllNodeStateTrackers;
- (void)removeNodeStateTrackerForNode:(id)a0;

@end
