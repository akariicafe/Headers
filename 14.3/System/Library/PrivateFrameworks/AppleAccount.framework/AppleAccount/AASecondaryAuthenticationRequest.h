@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 primaryToken:(id)a1;

@end
