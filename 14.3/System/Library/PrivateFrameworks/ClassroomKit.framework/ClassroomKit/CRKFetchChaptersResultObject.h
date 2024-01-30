@class NSArray;

@interface CRKFetchChaptersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *chapters;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
