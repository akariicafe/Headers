@class NMSKeepLocalRequest, UIViewController;

@interface NMUKeepLocalRequestController : NSObject {
    NMSKeepLocalRequest *_request;
    UIViewController *_presentingViewController;
}

+ (id)requiredPropertiesForModelKind:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (void)_handleResponseForRequest:(id)a0 options:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_presentAlertForRequest:(id)a0 options:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)performRequestWithOptions:(id)a0 completion:(id /* block */)a1;

@end
