@class NetworkMO, NSUUID, NSString, BlacklistMO, NSDate, NSObject, NSSet;

@interface BSSMO : NSManagedObject

@property (copy, nonatomic) NSUUID *apid;
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

+ (id)entityName;
+ (id)fetchRequest;

@end
