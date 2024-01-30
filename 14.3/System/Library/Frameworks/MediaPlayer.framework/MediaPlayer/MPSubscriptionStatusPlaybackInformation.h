@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    ICMusicSubscriptionStatus *_subscriptionStatusObject;
}

@property (readonly, nonatomic, getter=isDefinitiveInformation) BOOL definitiveInformation;
@property (readonly, nonatomic) BOOL hasPlaybackCapability;
@property (readonly, nonatomic) BOOL requiresCarrierManualVerification;
@property (readonly, nonatomic) BOOL shouldUseLease;
@property (readonly, nonatomic) BOOL shouldUseAccountLessStreaming;

- (id)initWithICSubscriptionStatus:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
