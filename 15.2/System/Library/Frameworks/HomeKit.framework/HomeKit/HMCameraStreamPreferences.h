@class HMCameraStreamVideoPreferences, HMCameraStreamAudioPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMCameraStreamAudioPreferences *audioPreferences;
@property (readonly, nonatomic) HMCameraStreamVideoPreferences *videoPreferences;
@property long long minimumRequiredAvailableOrInUseStreams;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioPreferences:(id)a0 videoPreferences:(id)a1;

@end
