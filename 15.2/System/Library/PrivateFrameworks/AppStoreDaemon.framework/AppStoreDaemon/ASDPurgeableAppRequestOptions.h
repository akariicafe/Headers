@class NSString;

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) BOOL skipLaunchCheck;
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
