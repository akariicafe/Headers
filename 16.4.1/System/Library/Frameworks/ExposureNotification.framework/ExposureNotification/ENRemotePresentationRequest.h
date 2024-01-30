@class NSUUID, NSDictionary, NSString, ENRegion;

@interface ENRemotePresentationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSUUID *receiptId;
@property (copy, nonatomic) NSDictionary *decisionInfo;
@property (copy, nonatomic) ENRegion *agencyRegion;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) ENRegion *region;
@property (nonatomic) BOOL testMode;

+ (id)presentationRequestWithType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)keyReleaseRequestCompletedWithDecision:(BOOL)a0;
- (void)onboardingRequestCompletedWithDecision:(BOOL)a0;
- (void)preApprovalRequestCompletedWithDecision:(BOOL)a0;

@end
