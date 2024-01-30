@class NSString;

@interface AADependentAuthenticationUIRequest : AAAppleIDSettingsRequest {
    NSString *_altDSID;
}

- (id)initWithAltDSID:(id)a0;
- (id)urlString;
- (void).cxx_destruct;

@end
