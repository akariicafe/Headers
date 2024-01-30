@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSNumber *desiredPurgeAmount;
@property (nonatomic) BOOL offloadOnly;
@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) long long urgency;
@property (copy, nonatomic) NSString *volume;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVolume:(id)a0 urgency:(long long)a1;

@end
