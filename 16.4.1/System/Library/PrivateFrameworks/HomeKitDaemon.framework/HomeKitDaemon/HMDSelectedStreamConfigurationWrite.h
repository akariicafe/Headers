@class HMDSelectedVideoParameters, HMDSessionControl, NSData, HMDSelectedAudioParameters;

@interface HMDSelectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSessionControl *sessionControl;
@property (readonly, copy, nonatomic) HMDSelectedVideoParameters *videoParameters;
@property (readonly, copy, nonatomic) HMDSelectedAudioParameters *audioParameters;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithSessionControl:(id)a0;
- (id)initWithSessionControl:(id)a0 videoParameters:(id)a1 audioParameters:(id)a2;

@end
