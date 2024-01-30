@class NSHashTable;

@interface __CARPFActivityManager : CARPFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_activities;
}

- (void).cxx_destruct;
- (id)init;

@end
