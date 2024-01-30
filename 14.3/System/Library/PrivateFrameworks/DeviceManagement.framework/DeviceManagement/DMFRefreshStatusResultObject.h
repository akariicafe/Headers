@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject

@property (copy, nonatomic) NSNumber *numberOfUpdates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
