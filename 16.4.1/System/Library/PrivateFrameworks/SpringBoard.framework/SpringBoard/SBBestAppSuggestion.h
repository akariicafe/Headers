@class NSUUID, NSString, NSURL, NSDate;

@interface SBBestAppSuggestion : NSObject <SBIconContinuityInfo>

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSDate *lastUpdateTime;
@property (readonly, copy, nonatomic) NSString *originatingDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceName;
@property (readonly, copy, nonatomic) NSString *originatingDeviceType;
@property (readonly, copy, nonatomic) NSString *originatingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *suggestedLocationName;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSiriSuggestion;
- (BOOL)isHandoff;
- (BOOL)isPrediction;
- (BOOL)isBluetoothAudioPrediction;
- (BOOL)isBluetoothPrediction;
- (BOOL)isFirstWakePrediction;
- (BOOL)isHeadphonesPrediction;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isLocationPredictionFromSource:(unsigned long long)a0;
- (BOOL)isArrivedAtHomePrediction;
- (BOOL)isArrivedAtWorkPrediction;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isCarPlayPrediction;
- (BOOL)isEligibleForLockScreen;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isLocationPredictionOfType:(unsigned long long)a0;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;
- (BOOL)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)a0;

@end
