@class _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability;

@interface SVDAudioPlaybackCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (void).cxx_destruct;
- (long long)supportsAudioPlayback;
- (id)_swiftBacking;
- (id)initWithCoder:(id)a0;

@end
