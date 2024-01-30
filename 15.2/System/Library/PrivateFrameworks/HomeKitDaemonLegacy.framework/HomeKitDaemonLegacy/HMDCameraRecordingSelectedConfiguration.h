@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingVideoCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithGeneralConfiguration:(id)a0 videoCodecConfiguration:(id)a1 audioCodecConfiguration:(id)a2;

@end
