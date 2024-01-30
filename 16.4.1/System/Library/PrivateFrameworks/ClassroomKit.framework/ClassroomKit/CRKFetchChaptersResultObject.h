@class NSArray;

@interface CRKFetchChaptersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *chapters;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
