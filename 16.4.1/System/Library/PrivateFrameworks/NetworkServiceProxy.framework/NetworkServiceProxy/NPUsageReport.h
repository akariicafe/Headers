@class NSString, NSUUID;

@interface NPUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *signingIdentifier;
@property (readonly, nonatomic) long long fallbackReason;
@property (retain, nonatomic) NSUUID *dayPassUUID;
@property (nonatomic) unsigned long long rtt;
@property (retain, nonatomic) NSString *geohash;
@property (nonatomic) unsigned char addressFamily;
@property (nonatomic) unsigned int edgeIndex;
@property (nonatomic) unsigned int keybagGeneration;
@property (nonatomic) unsigned int waldoTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSigningIdentifier:(id)a0 fallbackReason:(long long)a1;

@end
