@class CPSValidationRequest;

@interface CPSURLValidator : NSObject {
    CPSValidationRequest *_request;
}

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (void)_validateURL:(id)a0 forBundleID:(id)a1 policy:(id)a2 completion:(id /* block */)a3;

@end
