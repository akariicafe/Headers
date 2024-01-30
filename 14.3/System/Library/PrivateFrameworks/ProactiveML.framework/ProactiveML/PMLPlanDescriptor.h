@class NSString;

@interface PMLPlanDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *locale;

+ (BOOL)isValidPlanId:(id)a0;
+ (id)descriptorFromPlanId:(id)a0;
+ (id)planIdFromString:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1 locale:(id)a2;

@end
