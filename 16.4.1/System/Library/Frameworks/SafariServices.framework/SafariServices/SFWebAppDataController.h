@class _UIAsyncInvocation, NSString, _SFWebAppViewController, SFQueueingServiceViewControllerProxy;
@protocol SFWebAppServiceViewControllerProtocol;

@interface SFWebAppDataController : NSObject {
    SFQueueingServiceViewControllerProxy<SFWebAppServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _SFWebAppViewController *_remoteViewController;
    NSString *_webClipIdentifier;
}

- (void).cxx_destruct;
- (void)clearWebsiteDataWithCompletion:(id /* block */)a0;
- (id)initWithWebClipIdentifier:(id)a0;

@end
