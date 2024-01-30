@class NSString, NSArray;

@interface APPCNativeLayoutRepresentation : APPCContentRepresentation {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ accessibilityHeadline;
    void /* unknown type, empty encoding */ adCopy;
    void /* unknown type, empty encoding */ accessibilityAdCopy;
    void /* unknown type, empty encoding */ sponsoredBy;
    void /* unknown type, empty encoding */ elements;
}

@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *accessibilityHeadline;
@property (nonatomic, readonly) NSString *adCopy;
@property (nonatomic, readonly) NSString *accessibilityAdCopy;
@property (nonatomic, readonly) NSString *sponsoredBy;
@property (nonatomic, readonly) NSArray *elements;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 adType:(long long)a1 desiredPosition:(long long)a2 privacyMarkerPosition:(long long)a3 adSize:(struct CGSize { double x0; double x1; })a4 headline:(id)a5 accessibilityHeadline:(id)a6 adCopy:(id)a7 accessibilityAdCopy:(id)a8 sponsoredBy:(id)a9 elements:(id)a10 adPolicyData:(id)a11;

@end
