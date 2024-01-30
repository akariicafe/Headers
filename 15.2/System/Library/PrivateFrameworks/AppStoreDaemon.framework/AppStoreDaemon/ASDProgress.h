@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *bundleID;
@property long long completedUnitCount;
@property long long downloadCompletedUnitCount;
@property long long downloadTotalUnitCount;
@property long long installCompletedUnitCount;
@property long long installTotalUnitCount;
@property long long phase;
@property BOOL reportRemotely;
@property double throughput;
@property long long totalUnitCount;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
