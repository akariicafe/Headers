@class LeaveMO, NSSet, JoinMO, NSDate;

@interface SessionMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *end;
@property (nonatomic) long long inChargingDayTime;
@property (nonatomic) long long inChargingNightTime;
@property (nonatomic) long long inStationaryDayTime;
@property (nonatomic) long long inStationaryNightTime;
@property (nonatomic) long long usageDayTime;
@property (nonatomic) long long usageNightTime;
@property (retain, nonatomic) JoinMO *join;
@property (retain, nonatomic) LeaveMO *leave;
@property (retain, nonatomic) NSSet *roamsSet;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)getSessions:(id)a0 sortedAscending:(BOOL)a1 moc:(id)a2;
+ (void)prePopulateUsageTimeForNetwork:(id)a0 moc:(id)a1;
+ (id)getMostRecentSession:(id)a0 moc:(id)a1;
+ (BOOL)firstSessionCreated:(id)a0;
+ (unsigned long long)timeInStationary:(id)a0 maxAgeInDays:(unsigned long long)a1 dayTime:(BOOL)a2 moc:(id)a3;
+ (void)prePopulateUsageTimesForAllNetworks:(id)a0;
+ (BOOL)buildAndAddSessionWithJoin:(id)a0 moc:(id)a1;
+ (BOOL)addMostRecentSession:(id)a0 moc:(id)a1;
+ (BOOL)addSessionsForFirstUse:(id)a0;
+ (unsigned long long)timeInCharging:(id)a0 maxAgeInDays:(unsigned long long)a1 dayTime:(BOOL)a2 moc:(id)a3;
+ (id)getSessionsWithMostRecentDays:(id)a0 days:(unsigned long long)a1 sortedAscending:(BOOL)a2 moc:(id)a3;
+ (unsigned long long)usageTime:(id)a0 maxAgeInDays:(unsigned long long)a1 dayTime:(BOOL)a2 moc:(id)a3;
+ (void)prePopulateUsageTimesForUsageTimesForAllSessions:(id)a0;
+ (BOOL)addSession:(id)a0 leave:(id)a1 roams:(id)a2 moc:(id)a3;

@end
