@class _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability;

@interface SVDProfileSwitchingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (id)_swiftBacking;
- (void).cxx_destruct;
- (long long)supportsProfileSwitching;

@end
