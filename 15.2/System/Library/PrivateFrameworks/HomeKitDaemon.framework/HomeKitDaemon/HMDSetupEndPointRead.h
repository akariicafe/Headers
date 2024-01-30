@class NSNumber;

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long responseStatus;
@property (readonly, copy, nonatomic) NSNumber *videoSSRC;
@property (readonly, copy, nonatomic) NSNumber *audioSSRC;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (BOOL)_parseFromTLVDataOnSuccess;
- (BOOL)_parseFromTLVDataOnFailure;
- (id)initWithSessionIdentifier:(id)a0 address:(id)a1 videoSrtpParameters:(id)a2 audioSrtpParameters:(id)a3 responseStatus:(unsigned long long)a4 videoSSRC:(id)a5 audioSSRC:(id)a6;

@end
