@class WBSWebExtensionAPIWebNavigationEventObjC;

@interface WBSWebExtensionAPIWebNavigationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebNavigationEventObjC *_onBeforeNavigate;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCommitted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onDOMContentLoaded;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCompleted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onErrorOccurred;
}

- (void).cxx_destruct;

@end
