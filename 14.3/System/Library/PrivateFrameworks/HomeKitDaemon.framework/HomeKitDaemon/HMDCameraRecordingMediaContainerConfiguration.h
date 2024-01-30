@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters;

@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingMediaContainer *container;
@property (readonly, copy, nonatomic) HMDCameraRecordingMediaContainerParameters *parameters;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithMediaContainer:(id)a0 containerParameters:(id)a1;

@end
