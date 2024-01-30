@class NSString, NSDictionary;

@interface AAAuthenticationResponse : AAResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *fmipToken;
@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *mdmServerToken;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
