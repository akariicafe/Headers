@class NSUUID, NSArray, CWFAutoJoinParameters;

@interface CWFAutoJoinContext : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *autoJoinUUID;
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters;
@property (copy, nonatomic) NSArray *knownNetworks;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *SSIDList;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maxScanChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long maxScanSSIDCount;
@property (nonatomic) unsigned long long maxHiddenKnownNetworkSSIDAge;
@property (nonatomic) unsigned long long maxScanCacheAge;
@property (nonatomic) unsigned long long maxANQPCacheAge;
@property (nonatomic) unsigned long long maxScanCycles;
@property (nonatomic) long long minRSSI;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) double minBSSLocationAccuracy;
@property (nonatomic) double maxBSSLocationDistance;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
