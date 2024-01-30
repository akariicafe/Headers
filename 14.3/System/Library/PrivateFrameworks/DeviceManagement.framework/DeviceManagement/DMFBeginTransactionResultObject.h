@class NSUUID;

@interface DMFBeginTransactionResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
