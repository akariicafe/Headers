@class WKUserContentController, NSString, NFStateMachine, NSMutableArray;

@interface SWDocumentStateManager : NSObject <WKScriptMessageHandler, SWDocumentStateProviding, SWDocumentStateReporting>

@property (readonly, nonatomic) WKUserContentController *userContentController;
@property (readonly, nonatomic) NSMutableArray *onReadyBlocks;
@property (readonly, nonatomic) NSMutableArray *onLoadBlocks;
@property (readonly, nonatomic) NSMutableArray *onUnloadBlocks;
@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)onLoad:(id /* block */)a0;
- (void)documentIsReady;
- (BOOL)isDocumentReady;
- (void)documentStartedLoading;
- (void)documentWillUnload;
- (id)initWithUserContentController:(id)a0;
- (void)onReady:(id /* block */)a0;
- (void)onUnload:(id /* block */)a0;

@end
