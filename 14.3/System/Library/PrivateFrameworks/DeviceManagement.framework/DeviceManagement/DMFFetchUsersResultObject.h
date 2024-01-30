@class NSArray;

@interface DMFFetchUsersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *users;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithUsers:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
