@class NSString, BRRTCMigrationMetricDeviceDetails, NSMutableDictionary, NSNumber;

@interface BRRTCMigrationMetric : NSObject <BRRTCMetric>

@property (retain, nonatomic) NSString *migrationBeganTime;
@property (nonatomic) BOOL migrationSucceeded;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) BRRTCMigrationMetricDeviceDetails *deviceDetails;
@property (nonatomic) BOOL isAutomation;
@property (retain, nonatomic) NSMutableDictionary *transactionPhases;
@property (retain, nonatomic) NSNumber *migrationFailureCode;
@property (retain, nonatomic) NSString *migrationFailureDescription;
@property (retain, nonatomic) NSString *migrationFailureDomain;
@property (nonatomic) BOOL migrationFailedBTKeysNotSynced;
@property (nonatomic) BOOL migrationDeviceUnpairedBecauseKeychainIsOff;
@property (nonatomic) BOOL migrationDeviceUnpairedBecauseStale;
@property (retain, nonatomic) NSString *suspectTransaction;
@property (nonatomic) unsigned short rtcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
