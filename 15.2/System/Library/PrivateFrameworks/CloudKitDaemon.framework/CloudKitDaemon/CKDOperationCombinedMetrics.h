@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (retain, nonatomic) CKDOperationMetrics *MMCSMetrics;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCloudKitMetrics:(id)a0 andMMCSMetrics:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
