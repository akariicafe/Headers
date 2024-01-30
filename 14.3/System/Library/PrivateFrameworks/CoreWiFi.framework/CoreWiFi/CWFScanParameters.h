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
@property (nonatomic) int BSSType;
@property (nonatomic) int PHYMode;
@property (nonatomic) int scanType;
@property (nonatomic) long long minimumRSSI;
@property (nonatomic) BOOL mergeScanResults;
@property (nonatomic) BOOL includeHiddenNetworks;
@property (nonatomic) int scanFlags;
@property (copy, nonatomic) NSSet *includeProperties;
@property (copy, nonatomic) NSArray *includeScanResults;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToScanParameters:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
