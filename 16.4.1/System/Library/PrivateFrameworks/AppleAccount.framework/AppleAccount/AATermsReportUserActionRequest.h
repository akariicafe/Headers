@class NSURLRequest;

@interface AATermsReportUserActionRequest : AARequest {
    NSURLRequest *_urlRequest;
}

+ (Class)responseClass;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 parameters:(id)a1;

@end
