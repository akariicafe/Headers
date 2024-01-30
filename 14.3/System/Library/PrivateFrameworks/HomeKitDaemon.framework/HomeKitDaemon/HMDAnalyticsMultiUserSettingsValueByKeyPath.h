@class NSData, NSString;

@interface HMDAnalyticsMultiUserSettingsValueByKeyPath : HMFObject {
    int _type;
    long long _multiUserSettingsValueInteger;
    NSData *_multiUserSettingsValueData;
    NSString *_multiUserSettingsValueString;
}

- (void).cxx_destruct;

@end
