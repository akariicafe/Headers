@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)runJavaScript:(id)a0 completionHandler:(id /* block */)a1;

@end
