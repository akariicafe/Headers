@class NSProgress, NSArray;

@interface HDCloudSyncManagerTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _completion;
    long long _status;
}

@property (readonly) long long status;
@property (readonly) NSProgress *progress;
@property (readonly) HDCloudSyncManagerTask *originalTask;
@property (readonly, copy) NSArray *mirroringTasks;

- (void)finish;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)startWithCompletion:(id /* block */)a0;
- (void)mirrorTask:(id)a0;
- (BOOL)combineWithTask:(id)a0;
- (void)_addMirroringTask:(id)a0;

@end
