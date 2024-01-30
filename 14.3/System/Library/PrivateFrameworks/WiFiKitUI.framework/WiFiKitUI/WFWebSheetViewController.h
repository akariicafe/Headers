@class WFRemoteWebSheetViewController, _UIAsyncInvocation;
@protocol WFWebSheetViewControllerDelegate;

@interface WFWebSheetViewController : UIViewController <WFRemoteWebSheetViewControllerDelegate, WFNetworkView>

@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) WFRemoteWebSheetViewController *remoteViewController;
@property (weak, nonatomic) id<WFWebSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_requestRemoteViewController;
- (void)_finishSetupWithError:(id)a0;
- (void)remoteWebSheetViewController:(id)a0 handleEvent:(unsigned long long)a1 context:(id)a2;
- (void)_showRemoteViewController;
- (void)webSheetViewControllerServiceShouldTerminate;

@end
