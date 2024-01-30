@class WBSJSCallbackHandler, WBSWebExtensionWebNavigationURLFilter;

@interface WBSWebExtensionAPIWebNavigationEventListener : NSObject

@property (readonly, nonatomic) WBSJSCallbackHandler *callbackHandler;
@property (readonly, nonatomic) WBSWebExtensionWebNavigationURLFilter *filter;

- (void).cxx_destruct;
- (id)initWithCallbackHandler:(id)a0 filter:(id)a1;

@end
