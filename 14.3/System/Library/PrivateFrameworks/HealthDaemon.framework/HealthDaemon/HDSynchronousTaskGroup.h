@class NSMutableArray;
@protocol HDSynchronousTaskGroupDelegate;

@interface HDSynchronousTaskGroup : NSObject {
    _Atomic int _taskCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _success;
    NSMutableArray *_errors;
}

@property (readonly) int taskCount;
@property (weak) id<HDSynchronousTaskGroupDelegate> delegate;
@property (copy) id /* block */ didFinish;

- (id)init;
- (void).cxx_destruct;
- (void)finishTask;
- (void)beginTask;
- (void)failTaskWithError:(id)a0;

@end
