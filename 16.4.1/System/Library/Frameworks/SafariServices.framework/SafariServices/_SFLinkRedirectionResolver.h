@class NSString, SFSafariViewController, SFLinkRedirectionViewController;

@interface _SFLinkRedirectionResolver : NSObject <SFSafariViewControllerDelegateInternal> {
    id /* block */ _completionHandler;
    SFLinkRedirectionViewController *_redirectionViewController;
}

@property (readonly, nonatomic) SFSafariViewController *safariViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)safariViewController:(id)a0 didResolveRedirectionWithURL:(id)a1 appLink:(id)a2;

@end
