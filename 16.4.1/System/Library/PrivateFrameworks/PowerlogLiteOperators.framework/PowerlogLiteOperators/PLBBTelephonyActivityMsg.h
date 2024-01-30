@class NSString, NSNumber;

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot

@property (retain) NSString *activeBand;
@property (retain) NSString *dataStatus;
@property (retain) NSString *currentRat;
@property (retain) NSString *preferredRat;
@property (retain) NSString *campedRat;
@property (retain) NSString *callStatus;
@property (retain) NSString *airplaneMode;
@property (retain) NSString *simStatus;
@property (retain) NSNumber *signalStrength;
@property (retain) NSNumber *signalBars;

+ (id)entryEventPointDefinitionTelephonyActivity;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)logPointIntervalTelephonyActivity;
- (void)refreshTelephonyActivity;
- (void)logPointIntervalTelephonyActivityAirplaneModeChange;
- (void).cxx_destruct;

@end
