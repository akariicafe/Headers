@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *cardInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
