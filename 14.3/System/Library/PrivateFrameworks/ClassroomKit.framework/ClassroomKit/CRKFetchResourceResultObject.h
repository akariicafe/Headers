@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *resourceData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
