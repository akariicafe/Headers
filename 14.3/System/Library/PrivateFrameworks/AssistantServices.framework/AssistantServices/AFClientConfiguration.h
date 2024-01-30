@class AFAudioPlaybackRequest, AFAccessibilityState;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFAccessibilityState *accessibilityState;
@property (readonly, nonatomic) long long deviceRingerSwitchState;
@property (readonly, nonatomic) BOOL isDeviceInSetupFlow;
@property (readonly, nonatomic) BOOL isDeviceInCarDNDMode;
@property (readonly, nonatomic) BOOL isDeviceInStarkMode;
@property (readonly, nonatomic) float outputVolume;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithAccessibilityState:(id)a0 deviceRingerSwitchState:(long long)a1 isDeviceInSetupFlow:(BOOL)a2 isDeviceInCarDNDMode:(BOOL)a3 isDeviceInStarkMode:(BOOL)a4 outputVolume:(float)a5 tapToSiriAudioPlaybackRequest:(id)a6 twoShotAudioPlaybackRequest:(id)a7;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
