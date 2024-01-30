@class HMDReselectedRTPParameters, HMDVideoAttributes;

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes;
@property (readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithAttribute:(id)a0 rtpParameter:(id)a1;

@end
