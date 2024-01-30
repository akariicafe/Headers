@class _DECAppItem, NSUUID, _DECResult;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion

@property (readonly, nonatomic) _DECAppItem *appSuggestion;
@property (readonly, nonatomic) _DECResult *result;
@property (readonly, nonatomic) NSUUID *resultUUID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPrediction;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)originatingDeviceName;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isBluetoothAudioPrediction;
- (BOOL)isBluetoothPrediction;
- (BOOL)isHeadphonesPrediction;
- (BOOL)isFirstWakePrediction;
- (BOOL)isArrivedAtHomePrediction;
- (BOOL)isArrivedAtWorkPrediction;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isCarPlayPrediction;
- (id)initWithAppSuggestion:(id)a0 result:(id)a1;

@end
