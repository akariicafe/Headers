@class NSObject;
@protocol OS_dispatch_queue;

@interface CFBackgroundActionRunner : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL backgroundActionRunnerSuccess;
@property BOOL runningLocally;

- (id)init;
- (void).cxx_destruct;
- (void)runBackgroundActions:(id)a0 completion:(id /* block */)a1;
- (void)_handleBackgroundAction:(id)a0 onDispatchGroup:(id)a1;
- (void)_handleBackgroundActionRequest:(id)a0 completion:(id /* block */)a1;

@end
