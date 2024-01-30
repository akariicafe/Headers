@class NSString, NSNumber;

@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) BOOL isIPv6Address;
@property (readonly, copy, nonatomic) NSNumber *videoRTPPort;
@property (readonly, copy, nonatomic) NSNumber *audioRTPPort;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithIPAddress:(id)a0 isIPv6Address:(BOOL)a1 videoRTPPort:(id)a2 audioRTPPort:(id)a3;
- (BOOL)compatibleWithRemoteEndPoint:(id)a0;

@end
