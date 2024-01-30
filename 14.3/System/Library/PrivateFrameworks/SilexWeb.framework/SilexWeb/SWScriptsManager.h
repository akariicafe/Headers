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
- (void)executeScript:(id)a0;
- (void)addScript:(id)a0;
- (void)removeAllScripts;
- (void)removeScript:(id)a0;
- (id)initWithWebView:(id)a0 documentStateProvider:(id)a1 logger:(id)a2;
- (void)executeQueuedScripts;
- (void)queueExecutableScript:(id)a0;

@end
