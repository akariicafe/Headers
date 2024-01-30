@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) CLLocation *location;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
