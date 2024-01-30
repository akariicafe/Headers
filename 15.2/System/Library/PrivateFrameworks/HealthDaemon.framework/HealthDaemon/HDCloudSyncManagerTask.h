@class NSProgress, NSArray;

@interface HDCloudSyncManagerTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _completion;
    long long _status;
}

@property (readonly) long long status;
@property long long priority;
@property (readonly) NSProgress *progress;
@property (readonly, weak) HDCloudSyncManagerTask *originalTask;
@property (readonly, copy) NSArray *mirroringTasks;

- (void)finish;
- (BOOL)combineWithTask:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)startWithCompletion:(id /* block */)a0;
- (void)mirrorTask:(id)a0;

@end
