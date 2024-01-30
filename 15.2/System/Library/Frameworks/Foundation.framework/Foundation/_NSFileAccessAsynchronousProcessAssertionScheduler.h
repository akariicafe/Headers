@class NSMutableDictionary;

@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {
    NSMutableDictionary *_assertionsPerPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (id)init;
- (id)addAssertionWithName:(id)a0 forPID:(int)a1;
- (void)removeAssertionWithToken:(id)a0;

@end
