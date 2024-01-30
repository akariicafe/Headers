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

- (BOOL)isSiriSuggestion;
- (id)description;
- (BOOL)isPrediction;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isBluetoothAudioPrediction;
- (BOOL)isBluetoothPrediction;
- (BOOL)isHeadphonesPrediction;
- (BOOL)isFirstWakePrediction;
- (BOOL)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)a0;
- (BOOL)isLocationPredictionOfType:(unsigned long long)a0;
- (BOOL)isArrivedAtHomePrediction;
- (BOOL)isArrivedAtWorkPrediction;
- (BOOL)isLocationPredictionFromSource:(unsigned long long)a0;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isCarPlayPrediction;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;
- (BOOL)isHandoff;
- (BOOL)isEligibleForLockScreen;

@end
