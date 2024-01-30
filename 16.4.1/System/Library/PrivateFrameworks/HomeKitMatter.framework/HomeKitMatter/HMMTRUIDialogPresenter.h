@class NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRUIDialogPresenter : NSObject

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) id context;
@property (weak, nonatomic) id dialogDelegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 context:(id)a1;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)a0 completionHandler:(id /* block */)a1;

@end
