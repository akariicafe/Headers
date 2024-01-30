@class NSArray;

@interface HMDAnalyticsMultiUserSettings : HMFObject {
    BOOL _isOwner;
    NSArray *_multiUserSettingsValuesByKeyPaths;
}

- (void).cxx_destruct;

@end
