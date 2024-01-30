@class NSString;

@interface AABeneficiaryClaimUIRequest : AAAppleIDSettingsRequest {
    NSString *_claimCode;
}

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1 claimCode:(id)a2;

@end
