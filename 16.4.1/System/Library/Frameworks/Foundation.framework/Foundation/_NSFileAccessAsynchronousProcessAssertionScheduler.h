@class NSMutableDictionary;

@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {
    NSMutableDictionary *_assertionsPerPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)removeAssertionWithToken:(id)a0;
- (id)addAssertionWithName:(id)a0 forPID:(int)a1;
- (id)init;

@end
