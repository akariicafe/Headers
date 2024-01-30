@class NSDictionary;

@interface CRKDumpIDSInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *info;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
