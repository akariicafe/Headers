@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *applicationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithApplicationsByIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
