@class NSString;

@interface CPSClipInvocationPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEligible) BOOL eligible;
@property (readonly, nonatomic, getter=isRecoverable) BOOL recoverable;
@property (readonly, nonatomic, getter=isIneligibleDueToContentRestriction) BOOL ineligibleDueToContentRestriction;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL canShowHeroImage;

+ (id)eligiblePolicy;
+ (id)ineligiblePolicyWithReason:(long long)a0;
+ (id)invocationPolicyWithAMSDict:(id)a0;
+ (void)requestAccountPolicyWithCompletion:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)localizedMessageForClipMetadata:(id)a0;
- (id)initWithEligible:(BOOL)a0 reason:(long long)a1;

@end
