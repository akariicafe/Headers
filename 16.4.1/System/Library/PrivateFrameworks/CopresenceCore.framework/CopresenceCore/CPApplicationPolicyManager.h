@class NSDictionary;

@interface CPApplicationPolicyManager : NSObject <CPApplicationPolicyManager> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegates;
    void /* unknown type, empty encoding */ contactStore;
}

@property (class, nonatomic, readonly) CPApplicationPolicyManager *sharedInstance;

@property (nonatomic, readonly) NSDictionary *authorizedBundleIdentifiers;
@property (nonatomic) BOOL autoSharePlayEnabled;
@property (nonatomic, readonly) BOOL autoLaunchEnabled;

- (void)setAuthorization:(BOOL)a0 forBundleID:(id)a1;
- (void)handleApplicationUninstalledNotification:(id)a0;
- (void)handleCNContactStoreDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)addDelegate:(id)a0 withQueue:(id)a1;
- (id)init;
- (BOOL)shouldAutoLaunchAppForActivity:(id)a0 onConversation:(id)a1;
- (void)updateAllowedHandlesForConversation:(id)a0;
- (void).cxx_destruct;

@end
