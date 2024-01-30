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
- (void).cxx_destruct;
- (void)logPointIntervalTelephonyActivityAirplaneModeChange;
- (void)logPointIntervalTelephonyActivity;
- (void)refreshTelephonyActivity;

@end
