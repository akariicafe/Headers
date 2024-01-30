@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}

- (id)activityType;
- (id)uniqueIdentifier;
- (id)lastUpdateTime;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHandoff;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)originatingDeviceIdentifier;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;

@end
