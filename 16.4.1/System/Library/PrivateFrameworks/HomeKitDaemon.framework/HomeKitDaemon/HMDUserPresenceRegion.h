@class NSNumber;

@interface HMDUserPresenceRegion : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)regionWithDict:(id)a0;
+ (id)regionWithCoder:(id)a0;
+ (id)regionWithMessage:(id)a0;
+ (id)regionWithNumber:(id)a0;
+ (id)regionWithValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithNumber:(id)a0;
- (void)addToCoder:(id)a0;
- (void)addToPayload:(id)a0;

@end
