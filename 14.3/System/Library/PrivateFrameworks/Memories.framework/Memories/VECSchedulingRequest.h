@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VECSchedulingRequest : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _queued;
    BOOL _cancelled;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *doneOrCancelGroup;
@property (readonly, nonatomic) id /* block */ taskHandler;
@property (readonly, nonatomic) id /* block */ dellocHandler;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) BOOL isCancelled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDoneOrCancelGroup:(id)a0 taskHandler:(id /* block */)a1 dellocHandler:(id /* block */)a2;
- (void)markAsQueued;
- (void)markAsCompletedOrCancelled:(BOOL)a0;

@end
