@class NSUUID, NSValue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UIKBTouchOrderedTaskList : NSObject {
    NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
    NSMutableArray *_touchStateTasks;
}

@property (readonly, retain, nonatomic) NSUUID *touchUUID;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) double originalStartTime;
@property (readonly, retain, nonatomic) NSValue *currentTouchPoint;
@property (nonatomic) BOOL ignoredOnBegin;
@property (readonly, nonatomic) BOOL hasTasks;

+ (id)taskListForTouchUUID:(id)a0 withPathIndex:(unsigned long long)a1;

- (void)dealloc;
- (id)initWithTouchUUID:(id)a0 withPathIndex:(unsigned long long)a1;
- (void)removeTasksMatchingFilter:(id /* block */)a0;
- (BOOL)isExecutingFirstTask;
- (BOOL)executeTasksInView:(id)a0 withBlock:(id /* block */)a1;
- (id)firstTouchStateForUITouchPhase:(long long)a0;
- (void)addTask:(id)a0;

@end
