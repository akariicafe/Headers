@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *resourceData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
