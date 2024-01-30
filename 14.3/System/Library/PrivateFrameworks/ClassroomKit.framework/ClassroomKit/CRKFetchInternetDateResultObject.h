@class NSDate;

@interface CRKFetchInternetDateResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
