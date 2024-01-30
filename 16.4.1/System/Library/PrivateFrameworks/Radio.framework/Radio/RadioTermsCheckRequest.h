@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {
    SSURLConnectionRequest *_request;
}

@property (nonatomic) unsigned long long acceptedTermsVersion;

- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
