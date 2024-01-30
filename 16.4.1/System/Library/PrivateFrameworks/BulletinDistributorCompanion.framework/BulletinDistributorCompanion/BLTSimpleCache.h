@class NSMutableArray;

@interface BLTSimpleCache : NSObject {
    NSMutableArray *_objects;
    unsigned long long _capacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)objects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)cacheObject:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
