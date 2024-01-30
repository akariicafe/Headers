@class NSNumber, NSArray;

@interface HMDAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *audioChannelCount;
@property (readonly, copy, nonatomic) NSArray *bitRateSettings;
@property (readonly, copy, nonatomic) NSArray *audioSampleRates;
@property (readonly, copy, nonatomic) NSNumber *rtpPtime;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithChannelCount:(id)a0 bitRateSetting:(id)a1 audioSampleRate:(id)a2 rtpPtime:(id)a3;

@end
