@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *purgeableReason;
@property (nonatomic) long long purgeableType;
@property (nonatomic) long long staticDiskUsage;
@property (copy, nonatomic) NSNumber *storeItemID;

- (id)diagnosticDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
