@class HMDAudioCodecParameters, HMDAudioCodecGroup, NSNumber, HMDSelectedRTPParameters;

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup;
@property (readonly, copy, nonatomic) HMDAudioCodecParameters *codecParameters;
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters;
@property (readonly, copy, nonatomic) NSNumber *comfortNoiseEnabled;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithCodecGroup:(id)a0 codecParameter:(id)a1 rtpParameter:(id)a2 comfortNoiseEnabled:(id)a3;

@end
