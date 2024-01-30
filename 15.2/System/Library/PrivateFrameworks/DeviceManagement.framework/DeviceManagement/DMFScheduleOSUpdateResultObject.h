@class NSString, NSError;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSString *productKey;
@property (readonly, copy, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(unsigned long long)a0 productKey:(id)a1 error:(id)a2;

@end
