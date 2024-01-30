@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKMetric *cloudKitMetrics;
@property (readonly, copy, nonatomic) CKMetric *MMCSMetrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (id)initWithCloudKitMetrics:(id)a0 MMCSMetrics:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
