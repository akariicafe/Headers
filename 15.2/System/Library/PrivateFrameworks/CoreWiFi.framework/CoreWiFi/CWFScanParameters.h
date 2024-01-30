@class NSArray, NSString, NSSet;

@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSArray *SSIDList;
@property (nonatomic) unsigned long long numberOfScans;
@property (nonatomic) unsigned long long restTime;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) int BSSType;
@property (nonatomic) int PHYMode;
@property (nonatomic) int scanType;
@property (nonatomic) long long minimumRSSI;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) BOOL mergeScanResults;
@property (nonatomic) BOOL includeHiddenNetworks;
@property (nonatomic) int scanFlags;
@property (copy, nonatomic) NSSet *includeProperties;
@property (copy, nonatomic) NSArray *includeScanResults;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;
@property (copy, nonatomic) NSArray *ANQPElementIDListForPasspointScanResults;
@property (nonatomic) unsigned long long maximumANQPCacheAgeForPasspointScanResults;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToScanParameters:(id)a0;
- (unsigned long long)hash;

@end
