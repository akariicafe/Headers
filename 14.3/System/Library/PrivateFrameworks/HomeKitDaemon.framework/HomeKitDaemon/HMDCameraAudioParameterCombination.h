@class HMDBitRateSetting, HMDAudioSampleRate, HMDAudioCodecGroup, NSNumber;

@interface HMDCameraAudioParameterCombination : HMFObject

@property (readonly, nonatomic) HMDAudioCodecGroup *codecGroupType;
@property (readonly, nonatomic) HMDBitRateSetting *bitrateSetting;
@property (readonly, nonatomic) HMDAudioSampleRate *sampleRate;
@property (readonly, nonatomic) NSNumber *maximumBitrate;
@property (readonly, nonatomic) NSNumber *minimumBitrate;
@property (readonly, nonatomic) NSNumber *rtcpInterval;
@property (readonly, nonatomic) NSNumber *rtpPTime;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCodecGroup:(id)a0 bitrateSetting:(id)a1 sampleRate:(id)a2;
- (id)initWithCodecGroup:(id)a0 bitrateSetting:(id)a1 sampleRate:(id)a2 maximumBitrate:(id)a3 minimumBitrate:(id)a4 rtcpInterval:(id)a5 rtpPtime:(id)a6;

@end
