@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject

@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *SOCKSProxyServer;
@property (retain, nonatomic) NSNumber *SOCKSProxyPort;

+ (BOOL)isInternalBuild;
+ (id)currentEnvironment;
+ (void)resetEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_defaultServerURL;
- (id)initWithEnvironmentType:(unsigned long long)a0;
- (unsigned long long)_defaultServerSelection;
- (id)_generateServerURL;
- (id)_environmentServerString;

@end
