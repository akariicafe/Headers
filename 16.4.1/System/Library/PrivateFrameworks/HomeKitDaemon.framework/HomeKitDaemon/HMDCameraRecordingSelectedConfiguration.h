@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingVideoCodecConfiguration, HMDCameraRecordingGeneralConfiguration, NSData;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithGeneralConfiguration:(id)a0 videoCodecConfiguration:(id)a1 audioCodecConfiguration:(id)a2;

@end
