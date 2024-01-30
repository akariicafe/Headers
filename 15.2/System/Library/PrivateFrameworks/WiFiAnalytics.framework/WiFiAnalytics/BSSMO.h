@class NetworkMO, NSUUID, NSString, BlacklistMO, NSDate, NSObject, NSSet;

@interface BSSMO : NSManagedObject

@property (copy, nonatomic) NSUUID *apid;
@property (copy, nonatomic) NSUUID *apPhysicalScopeId;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) BOOL beaconMetricSubmitted;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) short channel;
@property (nonatomic) short disBcnLossCount;
@property (nonatomic) short disTrgDisCount;
@property (nonatomic) short disUsrForcedInWeakRssiCount;
@property (copy, nonatomic) NSUUID *idUsedInMetric;
@property (nonatomic) BOOL isEdgeForJoin;
@property (nonatomic) BOOL isEdgeForLeave;
@property (nonatomic) BOOL isTCPGood;
@property (copy, nonatomic) NSDate *lastSeen;
@property (nonatomic) BOOL manualJoinAfterAutoLeave;
@property (retain, nonatomic) NSObject *neighborBSSIDs;
@property (retain, nonatomic) NSObject *neighborChannels;
@property (retain, nonatomic) NSObject *parsedBeacon;
@property (nonatomic) int phyMode;
@property (nonatomic) short roamTriggerRssi;
@property (retain, nonatomic) NSObject *unparsedBeacon;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *geoTag;
@property (retain, nonatomic) NSSet *joins;
@property (retain, nonatomic) NSSet *leaves;
@property (retain, nonatomic) NetworkMO *network;
@property (retain, nonatomic) NSSet *roamsFrom;
@property (retain, nonatomic) NSSet *roamsTo;
@property (retain, nonatomic) NSSet *scanResult;
@property (retain, nonatomic) NSSet *scansFrom;

+ (id)copyDeploymentUuidsForSsid:(id)a0 moc:(id)a1;
+ (id)getInstance:(id)a0 ssid:(id)a1 moc:(id)a2;
+ (unsigned long long)numBssInBand:(id)a0 bandIs24:(BOOL)a1 moc:(id)a2;
+ (id)entityName;
+ (id)allBssidsForSsid:(id)a0 moc:(id)a1;
+ (id)fetchRequest;
+ (id)allSsidsForBssid:(id)a0 moc:(id)a1;
+ (id)copyBssidsForDeployment:(id)a0 deploymentUuid:(id)a1 moc:(id)a2;
+ (BOOL)setBssManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
+ (id)bssManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (id)getDeploymentUuidForBssids:(id)a0 moc:(id)a1;
+ (BOOL)coalesceBssidsIntoDeployment:(id)a0 moc:(id)a1;
+ (id)generateInstance:(id)a0 ssid:(id)a1 created:(BOOL *)a2 moc:(id)a3;

@end
