@class NSData, PCHomeKitIdentifier;
@protocol PCActivity;

@interface PCDisambiguationContext : NSObject <NSSecureCoding> {
    NSData *_activityData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PCHomeKitIdentifier *identifier;
@property (readonly, nonatomic) long long interactionDirection;
@property (readonly, nonatomic) id<PCActivity> activity;

- (id)titleText;
- (id)subtitleText;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)leadingImage;
- (void)encodeWithCoder:(id)a0;
- (void)cacheActivityData:(id)a0;
- (id)initWithIdentifier:(id)a0 direction:(long long)a1 activityData:(id)a2;

@end
