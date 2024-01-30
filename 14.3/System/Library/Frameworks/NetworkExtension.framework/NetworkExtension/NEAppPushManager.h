@class NSArray, NEConfiguration, NEConfigurationManager, NSDictionary, NSString;
@protocol NEAppPushDelegate;

@interface NEAppPushManager : NSObject

@property (getter=isActive) BOOL active;
@property (readonly) NEConfigurationManager *configurationManager;
@property (copy) NEConfiguration *configuration;
@property BOOL hasLoaded;
@property void *nesmConnection;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;
@property (weak) id<NEAppPushDelegate> delegate;
@property (copy) NSString *localizedDescription;
@property (getter=isEnabled) BOOL enabled;

+ (void)initCallKitXPCClient;
+ (void)deliverIncomingCallPayload:(id)a0;
+ (id)loadedManagers;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void)createEmptyConfigurationWithGrade:(long long)a0;
- (id)initWithGrade:(long long)a0;
- (void)cancelSessionManagerConnection;
- (BOOL)establishSessionManagerConnectionWithConfigurationID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
