@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) CLLocation *location;

+ (BOOL)supportsSecureCoding;

- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
