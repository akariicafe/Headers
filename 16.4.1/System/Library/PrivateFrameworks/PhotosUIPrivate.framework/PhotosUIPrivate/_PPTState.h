@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _PPTState : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    int _enteredCount;
}

@property BOOL hasRendered;
@property (retain) NSMutableArray *renderStatistics;

- (id)init;
- (void).cxx_destruct;
- (void)enterDispatchGroup;
- (void)groupNotifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)leaveDispatchGroup;

@end
