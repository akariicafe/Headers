@class NSString;

@interface CNReputationHandle : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long type;

+ (id)handleWithPhoneNumber:(id)a0;
+ (id)handleWithEmailAddress:(id)a0;
+ (id)handleWithStringValue:(id)a0;
+ (id)descriptionForType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureBuilder:(id)a0;
- (id)initWithStringValue:(id)a0 type:(long long)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
