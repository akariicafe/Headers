@protocol JFXTrackedEffectPropertiesDelegate;

@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long internalTrackingType;
@property (getter=isTrackingDisabled) BOOL disableTracking;
@property (nonatomic) long long trackingType;
@property (weak, nonatomic) id<JFXTrackedEffectPropertiesDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enableTrackingState:(BOOL)a0;

@end
