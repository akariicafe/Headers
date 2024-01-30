@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSNumber *desiredPurgeAmount;
@property (nonatomic) BOOL offloadOnly;
@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) long long urgency;
@property (copy, nonatomic) NSString *volume;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithVolume:(id)a0 urgency:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
