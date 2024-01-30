@class NSMutableArray;

@interface SESAtomicArray : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_objects;
}

- (id)init;
- (void).cxx_destruct;

@end
