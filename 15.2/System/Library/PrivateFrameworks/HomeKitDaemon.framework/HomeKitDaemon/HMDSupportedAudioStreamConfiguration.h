@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *supportsComfortNoise;
@property (readonly, copy, nonatomic) NSDictionary *codecConfigurations;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithComfortNoise:(id)a0 CodecConfigurations:(id)a1;

@end
