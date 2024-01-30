@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (id)activityType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bundleIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;

@end
