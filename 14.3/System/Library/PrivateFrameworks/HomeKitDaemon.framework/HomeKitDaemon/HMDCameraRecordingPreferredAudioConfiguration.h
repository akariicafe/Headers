@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject

@property (readonly) NSNumber *bitRate;
@property (readonly) long long sampleRate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSampleRate:(long long)a0 bitRate:(id)a1;

@end
