@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *supportsComfortNoise;
@property (readonly, copy, nonatomic) NSDictionary *codecConfigurations;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithComfortNoise:(id)a0 CodecConfigurations:(id)a1;

@end
