@class NSNumber;

@interface HMUserPresenceAuthorization : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)authWithDict:(id)a0;
+ (id)authWithMessage:(id)a0;
+ (id)authWithValue:(unsigned long long)a0;
+ (id)authWithCoder:(id)a0;
+ (id)authWithNumber:(id)a0;

- (id)initWithNumber:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addToPayload:(id)a0;
- (void)addToCoder:(id)a0;

@end
