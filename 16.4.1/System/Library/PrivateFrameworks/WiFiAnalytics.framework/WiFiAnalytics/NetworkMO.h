@class NSUUID, NSString, BlacklistMO, NSSet, NSObject;

@interface NetworkMO : NSManagedObject

@property (nonatomic) int authFlags;
@property (retain, nonatomic) NSObject *channels;
@property (copy, nonatomic) NSUUID *colocatedScopeId;
@property (nonatomic) long long colocatedState;
@property (nonatomic) BOOL didDeploymentChange;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL isLongTermNetwork;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isOmnipresent;
@property (nonatomic) BOOL isTCPGood;
@property (nonatomic) BOOL isWork;
@property (nonatomic) long long networkScore;
@property (readonly, nonatomic) long long numBSS;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long switchedAwayFromCount;
@property (nonatomic) long long switchedToCount;
@property (nonatomic) int usageRank;
@property (nonatomic) long long usageTime;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *bss;

+ (BOOL)invalidateColocatedScopeForSsidArray:(id)a0 moc:(id)a1;
+ (id)entityName;
+ (id)copyAllSsidsWithColocatedScopeId:(id)a0 moc:(id)a1;
+ (id)getInstance:(id)a0 moc:(id)a1;
+ (id)generateInstance:(id)a0 created:(BOOL *)a1 moc:(id)a2;
+ (BOOL)setNetworkManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
+ (id)fetchRequest;
+ (id)copyAllSsids:(id)a0;
+ (id)copyAllSsidsWithTrait:(id)a0 trait:(unsigned long long)a1;
+ (id)networkManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (void)classifyTraitsForNetwork:(id)a0 distanceFilter:(double)a1 moc:(id)a2;
+ (long long)getTotalScore:(id)a0 moc:(id)a1;
+ (id)getFirstColocatedScopeUuidForSsids:(id)a0 moc:(id)a1;
+ (id)copyAllSsidsWithColocatedScopeIdStr:(id)a0 moc:(id)a1;
+ (BOOL)coalesceSsidsIntoColocatedScope:(id)a0 moc:(id)a1;
+ (id)allStoredSsids:(id)a0;
+ (BOOL)removeNetwork:(id)a0 moc:(id)a1;

@end
