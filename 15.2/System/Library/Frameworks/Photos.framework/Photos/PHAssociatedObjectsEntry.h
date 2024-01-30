@class NSMutableDictionary;

@interface PHAssociatedObjectsEntry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_associatedObjects;
}

- (void).cxx_destruct;
- (id)init;

@end
