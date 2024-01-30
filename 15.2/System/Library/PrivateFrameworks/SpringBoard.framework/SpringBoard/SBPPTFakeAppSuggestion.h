@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (id)activityType;
- (id)initWithBundleIdentifier:(id)a0;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)suggestedLocationName;

@end
