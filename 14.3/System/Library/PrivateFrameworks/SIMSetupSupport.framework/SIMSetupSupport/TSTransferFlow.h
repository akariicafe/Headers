@class NSString, UIViewController;
@protocol TSSetupFlowItem;

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)needsToRunUsingMessageSession:(id)a0 completion:(id /* block */)a1;
+ (void)needsToRunUsingMessageSession:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)firstViewController:(id /* block */)a0;

@end
