@class NSString;

@interface SiriVirtualDeviceResolution.SpeakerCapability : NSObject <SiriVirtualDeviceResolution.CapabilityMatching, NSSecureCoding> {
    void /* unknown type, empty encoding */ primitivesMap;
    void /* unknown type, empty encoding */ key;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long supportStatus;
@property (nonatomic, readonly) long long qualityScore;

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;
+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)a0 upperBound:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesWithDescriptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 qualityScore:(long long)a1;

@end
