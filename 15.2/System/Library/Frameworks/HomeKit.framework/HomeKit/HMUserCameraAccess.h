@class NSNumber;

@interface HMUserCameraAccess : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)accessWithMessage:(id)a0;
+ (id)accessWithNumber:(id)a0;
+ (id)accessWithCoder:(id)a0;
+ (id)accessWithValue:(unsigned long long)a0;
+ (id)accessWithDict:(id)a0;

- (id)initWithNumber:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addToPayload:(id)a0;
- (void)addToCoder:(id)a0;

@end
