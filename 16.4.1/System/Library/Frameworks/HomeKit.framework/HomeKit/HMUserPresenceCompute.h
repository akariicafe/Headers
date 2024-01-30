@class NSNumber;

@interface HMUserPresenceCompute : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)computeWithCoder:(id)a0;
+ (id)computeWithDict:(id)a0;
+ (id)computeWithMessage:(id)a0;
+ (id)computeWithNumber:(id)a0;
+ (id)computeWithValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithNumber:(id)a0;
- (void)addToCoder:(id)a0;
- (void)addToPayload:(id)a0;

@end
