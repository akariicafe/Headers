@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *dmdStateDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStateDescription:(id)a0;

@end
