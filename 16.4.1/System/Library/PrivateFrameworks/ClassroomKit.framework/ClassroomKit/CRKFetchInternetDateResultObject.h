@class NSDate;

@interface CRKFetchInternetDateResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
