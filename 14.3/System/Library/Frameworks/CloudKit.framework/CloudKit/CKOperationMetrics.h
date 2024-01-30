@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKMetric *cloudKitMetrics;
@property (copy, nonatomic) CKMetric *MMCSMetrics;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionMetrics:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
