@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (id)activityType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;

@end
