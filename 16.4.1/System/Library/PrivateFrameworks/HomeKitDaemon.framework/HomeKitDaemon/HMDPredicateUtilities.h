@class NSSet, NSString, HMDHome;

@interface HMDPredicateUtilities : HMFObject <HMFLogging>

@property (class, readonly) NSSet *predicateCodingClasses;

@property (readonly, copy) NSString *logIdentifier;
@property unsigned long long cameraSignificantEvent;
@property unsigned long long personFamiliarityOptions;
@property unsigned long long audioAnalysisEventNotificationOptions;
@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)unarchiveFromData:(id)a0 error:(id *)a1;
+ (id)decodePredicateFromData:(id)a0 error:(id *)a1;
+ (id)encodePredicate:(id)a0 error:(id *)a1;
+ (id)filteredPredicate:(id)a0 withUserUUIDs:(id)a1;

- (id)sunrise;
- (void).cxx_destruct;
- (id)sunset;
- (BOOL)containsPresenceEvents:(id)a0;
- (void)fillAnalyticsData:(id)a0 forPredicate:(id)a1;
- (id)_updatePredicate:(id)a0 staleCharacteristicInCurrentPredicate:(BOOL *)a1 accessory:(id)a2 conditionModified:(BOOL *)a3;
- (id)addDeltaToNow:(id)a0;
- (id)comparePresence:(id)a0 operatorType:(id)a1 homePresence:(id)a2;
- (id)compareValueOfCharacteristic:(id)a0 againstValue:(id)a1 operatorType:(id)a2;
- (id)dateTodayMatchingComponents:(id)a0;
- (id)generateAnalyticsData:(id)a0;
- (id)initWithHome:(id)a0 logIdentifier:(id)a1;
- (id)predicateWithoutStaleCharacteristicsFromPredicate:(id)a0 accessory:(id)a1 conditionModified:(BOOL *)a2;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)a0;
- (id)rewritePredicate:(id)a0 currentCharacteristicInPredicate:(id *)a1 characteristicsToRead:(id)a2 homePresence:(id)a3;
- (id)rewritePredicate:(id)a0 forDaemon:(BOOL)a1 message:(id)a2;
- (id)rewritePredicateForClient:(id)a0;
- (id)rewritePredicateForDaemon:(id)a0 message:(id)a1;
- (id)updatePredicate:(id)a0 currentCharacteristicInPredicate:(id *)a1 conditionModified:(BOOL *)a2 removedCharacteristic:(id)a3 underService:(id)a4 underAccessory:(id)a5;
- (id)updatePredicate:(id)a0 removedUser:(id)a1 conditionModified:(BOOL *)a2;

@end
