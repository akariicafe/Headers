@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *stateDictionary;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
