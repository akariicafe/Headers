@class NSString, NSArray;

@interface AKProxiedClientContext : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isRapportLogin;
@property (nonatomic) BOOL shouldSkipAuthorizationUI;

- (void).cxx_destruct;

@end
