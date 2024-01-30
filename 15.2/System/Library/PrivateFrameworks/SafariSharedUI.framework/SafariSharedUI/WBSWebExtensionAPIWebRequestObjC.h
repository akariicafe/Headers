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

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeRequest;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeSendHeaders;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onSendHeaders;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onHeadersReceived;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onAuthRequired;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeRedirect;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onResponseStarted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onCompleted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onErrorOccurred;

+ (id)webRequestWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;

@end
