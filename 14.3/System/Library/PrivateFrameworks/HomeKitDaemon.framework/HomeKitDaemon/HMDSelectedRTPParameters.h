@class NSNumber;

@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *payloadType;
@property (retain, nonatomic) NSNumber *synchronizationSource;
@property (readonly, copy, nonatomic) NSNumber *maximumBitrate;
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate;
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval;
@property (copy, nonatomic) NSNumber *maxMTU;
@property (readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithPayloadType:(id)a0 maximumBitrate:(id)a1 minimumBitrate:(id)a2 rtcpInterval:(id)a3 maxMTU:(id)a4 comfortNoisePayloadType:(id)a5;

@end
