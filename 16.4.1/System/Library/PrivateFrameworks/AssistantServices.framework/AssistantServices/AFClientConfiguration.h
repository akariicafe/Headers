@class AFAudioPlaybackRequest, NSDate, AFAccessibilityState;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFAccessibilityState *accessibilityState;
@property (readonly, nonatomic) long long deviceRingerSwitchState;
@property (readonly, nonatomic) BOOL isDeviceInCarDNDMode;
@property (readonly, nonatomic) BOOL isDeviceInStarkMode;
@property (readonly, nonatomic) BOOL isDeviceWatchAuthenticated;
@property (readonly, nonatomic) BOOL areAnnouncementRequestsPermittedByPresentationWhileActive;
@property (readonly, nonatomic) float outputVolume;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowBeginDate;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowEndDate;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAccessibilityState:(id)a0 deviceRingerSwitchState:(long long)a1 isDeviceInCarDNDMode:(BOOL)a2 isDeviceInStarkMode:(BOOL)a3 isDeviceWatchAuthenticated:(BOOL)a4 areAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)a5 outputVolume:(float)a6 tapToSiriAudioPlaybackRequest:(id)a7 twoShotAudioPlaybackRequest:(id)a8 deviceSetupFlowBeginDate:(id)a9 deviceSetupFlowEndDate:(id)a10;

@end
