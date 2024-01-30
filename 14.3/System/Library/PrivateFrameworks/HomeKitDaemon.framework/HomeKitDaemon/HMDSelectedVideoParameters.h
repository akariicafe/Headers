@class HMDVideoCodec, HMDVideoCodecParameters, HMDVideoAttributes, HMDSelectedRTPParameters;

@interface HMDSelectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDVideoCodec *codec;
@property (readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters;
@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes;
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithCodec:(id)a0 codecParameter:(id)a1 attribute:(id)a2 rtpParameter:(id)a3;

@end
