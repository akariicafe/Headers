@interface CTStewieState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long allowedServices;
@property (nonatomic) long long activeServices;
@property (nonatomic) long long subscriptionDeterminedServices;
@property (nonatomic) long long subscribedServices;
@property (nonatomic) long long congestedServices;
@property (nonatomic) long long offGridCriteriaSatisfiedServices;
@property (nonatomic) long long status;
@property (nonatomic) long long reason;
@property (nonatomic) long long baseReason;
@property (nonatomic) long long transportType;

- (BOOL)isStewieActive;
- (BOOL)isSubscribedService:(long long)a0;
- (BOOL)displayStewieInStatusBar;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isOffGridCriteriaSatisfied:(long long)a0;
- (BOOL)isSubscriptionRequired:(long long)a0;
- (BOOL)isStewieActiveOverInternet;
- (id)initWithCoder:(id)a0;
- (BOOL)isSubscriptionStatusNetworkDetermined:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)displayInactiveSOSInStatusBar;
- (BOOL)isActiveService:(long long)a0;
- (id)initWithStewieState:(const struct StewieState { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0;
- (BOOL)isAllowedService:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToState:(id)a0;
- (BOOL)isCongestedService:(long long)a0;
- (id)init;
- (id)description;
- (BOOL)isStewieActiveOverBB;
- (long long)statusReasonForService:(long long)a0;

@end
