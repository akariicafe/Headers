@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}

- (id)lastUpdateTime;
- (id)activityType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isHandoff;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)originatingDeviceIdentifier;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;

@end
