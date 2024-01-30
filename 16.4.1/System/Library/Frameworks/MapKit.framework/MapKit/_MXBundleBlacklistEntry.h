@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject {
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)a0;

- (void).cxx_destruct;
- (BOOL)_isVersionValueAllowed:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 minimumDisallowedVersion:(id)a1 maximumDisallowedVersion:(id)a2;
- (BOOL)isBundleRecordAllowed:(id)a0;
- (BOOL)isExtensionAllowed:(id)a0;

@end
