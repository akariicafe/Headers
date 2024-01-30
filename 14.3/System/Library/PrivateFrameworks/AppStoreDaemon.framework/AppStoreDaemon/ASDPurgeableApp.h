@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *purgeableReason;
@property (nonatomic) long long staticDiskUsage;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isSystemApp) BOOL systemApp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)diagnosticDescription;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
