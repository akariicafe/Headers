@interface SASButtonActvationRequest : SASActivationRequest

@property (nonatomic) long long buttonIdentifier;

- (BOOL)isButtonRequest;
- (BOOL)isTestingRequest;
- (BOOL)isVoiceRequest;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isHoldToTalkSource;

@end
