@class NSNumber;

@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *maximumBitrate;
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate;
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithMaximumBitrate:(id)a0 minimumBitrate:(id)a1 rtcpInterval:(id)a2;

@end
