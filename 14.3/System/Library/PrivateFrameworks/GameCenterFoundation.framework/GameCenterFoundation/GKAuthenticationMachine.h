@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>

@property (nonatomic) long long loginCancelledCount;
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (void)migratePreBlacktailAccountInformation;
+ (BOOL)supportsSecureCoding;
+ (id)authMachineForEnvironment:(long long)a0;
+ (void)migratePreSundanceAccountInformation;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
