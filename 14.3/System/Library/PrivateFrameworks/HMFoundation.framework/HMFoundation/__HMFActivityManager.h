@class NSHashTable;

@interface __HMFActivityManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_activities;
}

- (id)init;
- (void).cxx_destruct;

@end
