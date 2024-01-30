@class NSArray, NSMutableOrderedSet;

@interface ARCircularArray : NSObject {
    NSMutableOrderedSet *_objects;
    long long _capacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _orderedSetLock;
}

@property (readonly) NSArray *contents;

- (id)add:(id)a0;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (long long)count;
- (id)initWithCapacity:(long long)a0;
- (id)peekLatest;

@end
