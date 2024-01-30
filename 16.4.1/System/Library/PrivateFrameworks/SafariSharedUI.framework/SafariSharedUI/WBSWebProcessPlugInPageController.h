@class NSString, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame, WBSWebProcessPlugIn;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate>

@property (readonly, nonatomic) WKWebProcessPlugInFrame *mainFrame;
@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *browserContextController;
@property (readonly, nonatomic) WBSWebProcessPlugIn *webProcessPlugIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
