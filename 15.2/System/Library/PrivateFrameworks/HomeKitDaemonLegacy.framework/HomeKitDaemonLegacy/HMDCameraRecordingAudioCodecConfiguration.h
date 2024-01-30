@class HMDCameraRecordingAudioCodecParameters, HMDCameraRecordingAudioCodec;

@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodec *codec;
@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecParameters *parameters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithAudioCodec:(id)a0 codecParameters:(id)a1;

@end
