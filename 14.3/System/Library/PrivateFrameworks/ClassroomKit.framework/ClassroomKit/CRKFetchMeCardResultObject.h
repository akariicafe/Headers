@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *cardInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
