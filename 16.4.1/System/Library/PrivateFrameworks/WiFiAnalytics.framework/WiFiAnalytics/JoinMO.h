@class NSString, NSDate, NSObject, BSSMO;

@interface JoinMO : NSManagedObject

@property (nonatomic) short autojoinPhase;
@property (nonatomic) short cca;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) BOOL dhcpSuccess;
@property (nonatomic) int ipv4Addr;
@property (nonatomic) int ipv4routerAddr;
@property (nonatomic) BOOL isAutojoin;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *routerMAC;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subreason;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)earliestJoinDate:(id)a0 moc:(id)a1;
+ (id)generateInstance:(id)a0;
+ (unsigned long long)joinCount:(id)a0 bssid:(id)a1 maxAgeInDays:(unsigned long long)a2 success:(BOOL)a3 moc:(id)a4;
+ (id)mostRecentJoin:(id)a0 ssid:(id)a1 moc:(id)a2;
+ (id)mostRecentJoinsWithBatchSize:(unsigned long long)a0 bssid:(id)a1 ssid:(id)a2 moc:(id)a3;
+ (id)ssidsWithRouterMAC:(id)a0 moc:(id)a1;

@end
