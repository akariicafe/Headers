@class ICLightweightMusicSubscriptionStatus;

@interface ICLightweightMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithExtendedSubscriptionStatusResponse:(id)a0;

@end
