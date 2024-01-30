@class NSString;

@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *productKey;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadPercentComplete;

+ (BOOL)supportsSecureCoding;
+ (id)descriptionForStatus:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProductKey:(id)a0 status:(unsigned long long)a1 downloadPercentComplete:(double)a2;

@end
