@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithDSID:(id)a0 primaryToken:(id)a1;

@end
