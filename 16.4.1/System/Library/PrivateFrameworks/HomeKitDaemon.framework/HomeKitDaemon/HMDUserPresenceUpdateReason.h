@class NSNumber;

@interface HMDUserPresenceUpdateReason : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)reasonWithDict:(id)a0;
+ (id)reasonWithCoder:(id)a0;
+ (id)reasonWithMessage:(id)a0;
+ (id)reasonWithNumber:(id)a0;
+ (id)reasonWithValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithNumber:(id)a0;
- (void)addToCoder:(id)a0;
- (void)addToPayload:(id)a0;

@end
