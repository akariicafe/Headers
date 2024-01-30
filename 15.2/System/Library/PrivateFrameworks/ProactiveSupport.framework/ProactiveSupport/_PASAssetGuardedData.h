@class NSString, ASAsset, NSMutableDictionary;

@interface _PASAssetGuardedData : NSObject {
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    ASAsset *_bestAvailableAsset;
    NSMutableDictionary *_overrides;
}

- (void).cxx_destruct;

@end
