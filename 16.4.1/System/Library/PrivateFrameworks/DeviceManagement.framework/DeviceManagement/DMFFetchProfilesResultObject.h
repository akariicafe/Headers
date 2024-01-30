@class NSArray;

@interface DMFFetchProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProfiles:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
