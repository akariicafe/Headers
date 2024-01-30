@class WBSWebExtensionAPIWebNavigationEventObjC;

@interface WBSWebExtensionAPIWebNavigationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebNavigationEventObjC *_onBeforeNavigate;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCommitted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onDOMContentLoaded;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCompleted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onErrorOccurred;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onBeforeNavigate;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onCommitted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onDOMContentLoaded;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onCompleted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onErrorOccurred;

+ (id)webNavigationWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)getFrameWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getAllFramesWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;

@end
