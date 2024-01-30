@class NSString, NSMutableDictionary;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler>

@property (retain, nonatomic) NSMutableDictionary *handlesByService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAXUIViewService:(id)a0 withData:(id)a1;
- (void)hideAXUIViewService:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (BOOL)isShowingAXUIViewService:(id)a0;

@end
