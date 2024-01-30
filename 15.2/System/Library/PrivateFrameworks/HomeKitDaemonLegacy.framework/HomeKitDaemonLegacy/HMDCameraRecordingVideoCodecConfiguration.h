@class NSArray, HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters;

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodec *codec;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecParameters *parameters;
@property (readonly, copy, nonatomic) NSArray *videoAttributes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithCodec:(id)a0 codecParameters:(id)a1 videoAttributes:(id)a2;

@end
