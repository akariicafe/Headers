@class NSString;

@interface ENAppConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *regionID;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *publicKeyVersion;
@property (nonatomic) BOOL exposureMatching;
@property (nonatomic) long long maxMatchingAttempts;
@property (nonatomic) long long maxTtkMatchAttempt;
@property (nonatomic) long long maxTtkMatchAttemptPerDay;
@property (nonatomic) double callbackIntervalInMin;
@property (nonatomic) double lastCachedEpochTimeInterval;

+ (id)appConfigurationForRegion:(id)a0 withInfo:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 andAppConfigInfo:(id)a1;

@end
