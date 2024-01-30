@class HMDAudioCodecGroup, HMDAudioCodecParameters;

@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup;
@property (readonly, copy, nonatomic) HMDAudioCodecParameters *audioCodecParameters;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithAudioCodecGroup:(id)a0 codecParameter:(id)a1;

@end
