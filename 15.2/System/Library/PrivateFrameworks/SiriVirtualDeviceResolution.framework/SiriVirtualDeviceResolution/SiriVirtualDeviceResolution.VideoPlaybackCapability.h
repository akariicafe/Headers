@class NSString;

@interface SiriVirtualDeviceResolution.VideoPlaybackCapability : NSObject <SiriVirtualDeviceResolution.CapabilityMatching, NSSecureCoding> {
    void /* unknown type, empty encoding */ primitivesMap;
    void /* unknown type, empty encoding */ key;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long supportsVideoPlayback;

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesWithDescriptions:(id)a0;
- (id)initWithStatus:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
