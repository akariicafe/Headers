@class NSData, PCDeviceIdentifier, PCHomeKitIdentifier;
@protocol PCActivity;

@interface PCDisambiguationContext : NSObject <NSSecureCoding> {
    NSData *_activityData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PCHomeKitIdentifier *identifier;
@property (readonly, nonatomic) PCDeviceIdentifier *deviceIdentifier;
@property (readonly, nonatomic) long long interactionDirection;
@property (readonly, nonatomic) id<PCActivity> activity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)subtitleText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)titleText;
- (id)leadingImage;
- (void).cxx_destruct;
- (void)cacheActivityData:(id)a0;
- (id)initWithIdentifier:(id)a0 direction:(long long)a1 activityData:(id)a2;

@end
