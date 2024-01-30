@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying>

@property (nonatomic) long long exceptionCode;
@property (nonatomic) unsigned long long reportType;
@property (copy, nonatomic) NSString *explanation;

+ (id)context;
+ (id)terminationAssertionContext;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTerminationContext:(id)a0;

@end
