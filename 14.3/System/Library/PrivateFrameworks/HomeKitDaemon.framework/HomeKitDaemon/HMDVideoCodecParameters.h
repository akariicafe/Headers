@class NSArray;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *h264Profiles;
@property (readonly, copy, nonatomic) NSArray *levels;
@property (readonly, copy, nonatomic) NSArray *packetizationModes;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithProfiles:(id)a0 levels:(id)a1 packetizationModes:(id)a2;

@end
