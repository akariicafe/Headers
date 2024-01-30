@class NSData, HMDSRTPCryptoSuite;

@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite;
@property (readonly, copy, nonatomic) NSData *srtpMasterKey;
@property (readonly, copy, nonatomic) NSData *srtpMasterSalt;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (BOOL)compatibleWithRemoteEndPoint:(id)a0;
- (id)initWithCryptoSuite:(id)a0 masterKey:(id)a1 masterSalt:(id)a2;

@end
