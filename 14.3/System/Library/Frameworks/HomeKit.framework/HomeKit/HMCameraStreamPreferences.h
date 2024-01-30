@class HMCameraStreamVideoPreferences, HMCameraStreamAudioPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMCameraStreamAudioPreferences *audioPreferences;
@property (readonly, nonatomic) HMCameraStreamVideoPreferences *videoPreferences;
@property long long minimumRequiredAvailableOrInUseStreams;

- (void).cxx_destruct;
- (id)initWithAudioPreferences:(id)a0 videoPreferences:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
