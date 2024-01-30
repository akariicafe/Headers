@class NSArray, NEConfiguration, NSString, NEVPNProtocol, NEVPNConnection;

@interface NEVPNManager : NSObject <NEPrettyDescription>

@property (copy) NEConfiguration *configuration;
@property BOOL hasLoaded;
@property BOOL notificationSent;
@property (copy) NSArray *onDemandRules;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (copy) NSString *localizedDescription;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;
@property (readonly) NEVPNConnection *connection;
@property (getter=isEnabled) BOOL enabled;

+ (id)sharedManager;
+ (id)loadedManagers;
+ (id)mapError:(id)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGrade:(long long)a0 connection:(id)a1 tunnelType:(long long)a2;
- (BOOL)isProtocolTypeValid:(long long)a0;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;

@end
