@class HMDReselectedRTPParameters, HMDVideoAttributes;

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes;
@property (readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithAttribute:(id)a0 rtpParameter:(id)a1;

@end
