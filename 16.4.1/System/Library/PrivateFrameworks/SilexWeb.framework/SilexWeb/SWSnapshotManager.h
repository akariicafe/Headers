@class NSString, WKWebView;
@protocol SWConfigurationManager;

@interface SWSnapshotManager : NSObject <SWSnapshotManager>

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<SWConfigurationManager> configurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 configurationManager:(id)a1;
- (void)takeSnapshotWithCompletionHandler:(id /* block */)a0;

@end
