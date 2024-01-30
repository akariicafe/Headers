@class NSArray, NSNumber;

@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *profiles;
@property (readonly, copy, nonatomic) NSArray *levels;
@property (readonly, copy, nonatomic) NSNumber *bitRate;
@property (readonly, copy, nonatomic) NSNumber *iFrameInterval;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithProfiles:(id)a0 levels:(id)a1 bitRate:(id)a2 iFrameInterval:(id)a3;

@end
