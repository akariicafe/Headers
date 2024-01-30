@class NSNumber, NSArray;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *prebufferLength;
@property (readonly, nonatomic) unsigned long long eventTriggerOptions;
@property (readonly, copy, nonatomic) NSArray *mediaContainerConfigurations;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithPrebufferLength:(id)a0 eventTriggerOptions:(unsigned long long)a1 mediaContainerConfigurations:(id)a2;

@end
