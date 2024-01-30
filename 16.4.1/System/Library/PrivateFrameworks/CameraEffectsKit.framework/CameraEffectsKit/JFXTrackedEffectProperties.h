@protocol JFXTrackedEffectPropertiesDelegate;

@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long internalTrackingType;
@property (getter=isTrackingDisabled) BOOL disableTracking;
@property (nonatomic) long long trackingType;
@property (readonly, nonatomic) long long currentTrackingType;
@property (weak, nonatomic) id<JFXTrackedEffectPropertiesDelegate> delegate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enableTrackingState:(BOOL)a0;

@end
