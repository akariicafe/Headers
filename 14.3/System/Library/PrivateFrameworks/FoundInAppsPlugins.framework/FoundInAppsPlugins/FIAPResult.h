@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *historicalDataRequests;
@property (readonly, nonatomic) NSError *error;

+ (id)new;
+ (id)resultWithHistoricalDataRequests:(id)a0 error:(id)a1;
+ (id)success;

- (id)init;
- (BOOL)isEqualToResult:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHistoricalDataRequests:(id)a0 error:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
