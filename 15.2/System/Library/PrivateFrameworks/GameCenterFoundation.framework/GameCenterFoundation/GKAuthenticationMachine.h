@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>

@property (nonatomic) long long loginCancelledCount;
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (BOOL)supportsSecureCoding;
+ (void)migratePreSundanceAccountInformation;
+ (id)authMachineForEnvironment:(long long)a0;
+ (void)migratePreBlacktailAccountInformation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
