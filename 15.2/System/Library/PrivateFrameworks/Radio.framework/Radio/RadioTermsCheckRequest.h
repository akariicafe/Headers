@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {
    SSURLConnectionRequest *_request;
}

@property (nonatomic) unsigned long long acceptedTermsVersion;

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;

@end
