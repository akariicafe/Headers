@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 primaryToken:(id)a1;

@end
