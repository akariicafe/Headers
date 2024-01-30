@class NSString;

@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *planId;
@property (retain, nonatomic) NSString *planLabel;
@property (retain, nonatomic) NSString *planValue;
@property (nonatomic) unsigned char planSubscriptionStatus;
@property (nonatomic) BOOL planPurchasable;
@property (retain, nonatomic) NSString *planDetailsURL;
@property (retain, nonatomic) NSString *planTermsURL;
@property (retain, nonatomic) NSString *planPurchaseURL;
@property (nonatomic) long long planType;
@property (readonly, nonatomic) long long planStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
