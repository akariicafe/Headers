@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id result;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (retain) NSError *error;
@property (retain) id result;
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled;

+ (id)defaultConcurrentQueue;
+ (id)mainQueue;
+ (id)dispatchGroup;
+ (id)backgroundConcurrentQueue;
+ (id)dispatchGroupWithName:(id)a0;
+ (void)waitUntilDone:(id /* block */)a0;

- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)wait;
- (void)perform:(id /* block */)a0;
- (long long)waitWithTimeout:(double)a0;
- (id)_values;
- (id)init;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dealloc;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (void)leave;
- (id)allValues;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (id)description;
- (void)enter;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithName:(id)a0;

@end
