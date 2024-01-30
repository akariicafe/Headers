@class NSString, WKWebView, NSMutableArray;
@protocol SWLogger;

@interface SWScriptsManager : NSObject <SWScriptsManager>

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableArray *queuedExecutableScripts;
@property (nonatomic) BOOL readyToExecuteScripts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_pauseScriptExecution;
- (void)_resumeScriptExecution;
- (void)addScript:(id)a0;
- (void)executeQueuedScripts;
- (void)executeScript:(id)a0 completion:(id /* block */)a1;
- (id)initWithWebView:(id)a0 documentStateProvider:(id)a1 logger:(id)a2;
- (void)queueExecutableScript:(id)a0 scriptExecutionCompletion:(id /* block */)a1;
- (void)removeAllScripts;
- (void)removeScript:(id)a0;

@end
