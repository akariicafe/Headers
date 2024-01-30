@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}

- (id)activityType;
- (void).cxx_destruct;
- (id)lastUpdateTime;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)bundleIdentifier;
- (BOOL)isLocationBasedSuggestion;
- (id)originatingDeviceIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;
- (BOOL)isHandoff;

@end
