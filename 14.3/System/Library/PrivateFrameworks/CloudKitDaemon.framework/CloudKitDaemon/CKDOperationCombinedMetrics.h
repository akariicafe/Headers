@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (retain, nonatomic) CKDOperationMetrics *MMCSMetrics;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithCloudKitMetrics:(id)a0 andMMCSMetrics:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
