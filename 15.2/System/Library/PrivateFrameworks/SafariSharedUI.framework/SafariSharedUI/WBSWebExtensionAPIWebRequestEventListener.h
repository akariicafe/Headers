@class WBSJSCallbackHandler, WBSWebExtensionWebRequestFilter;

@interface WBSWebExtensionAPIWebRequestEventListener : NSObject

@property (readonly, nonatomic) WBSJSCallbackHandler *callbackHandler;
@property (readonly, nonatomic) WBSWebExtensionWebRequestFilter *filter;

- (void).cxx_destruct;
- (id)initWithCallbackHandler:(id)a0 filter:(id)a1;

@end
