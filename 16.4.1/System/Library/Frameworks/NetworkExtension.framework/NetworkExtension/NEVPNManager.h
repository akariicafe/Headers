@class NSUUID, NEConfiguration, NSString, NSArray, NEVPNProtocol, NEVPNConnection;

@interface NEVPNManager : NSObject <NEPrettyDescription> {
    BOOL _hasLoaded;
    BOOL _notificationSent;
}

@property (copy) NEConfiguration *configuration;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) BOOL fromProfile;
@property (readonly, nonatomic, getter=isFromMDM) BOOL fromMDM;
@property (copy) NSArray *onDemandRules;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (copy) NSString *localizedDescription;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;
@property (readonly) NEVPNConnection *connection;
@property (getter=isEnabled) BOOL enabled;

+ (id)sharedManager;
+ (id)create;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)additionalSetup;
- (id)copyCurrentUserStartOptions;
- (id)createL2TPUserPreferencesWithName:(id)a0;
- (id)initWithGrade:(long long)a0 connection:(id)a1 tunnelType:(long long)a2;
- (BOOL)isProtocolTypeValid:(long long)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
