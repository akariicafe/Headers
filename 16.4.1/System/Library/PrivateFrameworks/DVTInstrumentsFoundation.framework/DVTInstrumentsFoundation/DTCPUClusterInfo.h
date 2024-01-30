@interface DTCPUClusterInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long clusterID;
@property (readonly, nonatomic) unsigned long long clusterFlags;
@property (readonly, nonatomic) BOOL isEfficiencyCore;
@property (readonly, nonatomic) BOOL isPerformanceCore;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithClusterID:(unsigned long long)a0 flags:(unsigned long long)a1;

@end
