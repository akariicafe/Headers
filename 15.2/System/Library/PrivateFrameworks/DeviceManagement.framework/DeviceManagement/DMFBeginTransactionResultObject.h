@class NSUUID;

@interface DMFBeginTransactionResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
