@class PETScalarEventTracker, PETDistributionEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) PETScalarEventTracker *frameworkErrors;
@property (retain, nonatomic) PETDistributionEventTracker *contactsMatches;
@property (retain, nonatomic) PETDistributionEventTracker *foundInAppsMatches;
@property (retain, nonatomic) PETDistributionEventTracker *eventsMatches;

+ (id)instance;
+ (id)trackerForDistribution:(id)a0 withProperties:(id)a1;
+ (id)counter:(id)a0 withProperties:(id)a1;
+ (id)trackerForGoal:(id)a0 withProperties:(id)a1;
+ (void)frameworkError:(id)a0 errorCode:(long long)a1;
+ (void)contactMatchesWithContactsCount:(unsigned long long)a0 foundInAppsCount:(unsigned long long)a1;
+ (void)eventsMatches:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
