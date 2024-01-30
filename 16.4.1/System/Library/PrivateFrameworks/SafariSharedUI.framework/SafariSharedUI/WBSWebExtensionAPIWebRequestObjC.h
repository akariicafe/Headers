@class WBSWebExtensionAPIWebRequestEventObjC;

@interface WBSWebExtensionAPIWebRequestObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeRequest;
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeSendHeaders;
    WBSWebExtensionAPIWebRequestEventObjC *_onSendHeaders;
    WBSWebExtensionAPIWebRequestEventObjC *_onHeadersReceived;
    WBSWebExtensionAPIWebRequestEventObjC *_onAuthRequired;
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeRedirect;
    WBSWebExtensionAPIWebRequestEventObjC *_onResponseStarted;
    WBSWebExtensionAPIWebRequestEventObjC *_onCompleted;
    WBSWebExtensionAPIWebRequestEventObjC *_onErrorOccurred;
}

- (void).cxx_destruct;

@end
