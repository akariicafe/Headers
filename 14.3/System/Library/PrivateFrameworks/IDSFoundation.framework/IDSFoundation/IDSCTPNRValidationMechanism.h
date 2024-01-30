@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *context;

+ (id)SMSMechanismWithContext:(id)a0;
+ (id)SMSLessMechanism;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 context:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
