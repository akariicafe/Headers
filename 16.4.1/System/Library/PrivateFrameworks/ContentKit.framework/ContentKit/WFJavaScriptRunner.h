@class NSString, NSItemProvider;

@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol>

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;
- (void)runJavaScript:(id)a0 completionHandler:(id /* block */)a1;

@end
