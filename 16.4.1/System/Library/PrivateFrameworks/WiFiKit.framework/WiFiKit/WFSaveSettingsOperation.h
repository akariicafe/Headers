@class NSString, NSArray, NSOperationQueue;

@interface WFSaveSettingsOperation : WFOperation {
    NSString *_name;
}

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (nonatomic, getter=isCurrentNetwork) BOOL currentNetwork;

- (void)dealloc;
- (void)setName:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)name;
- (void)_applyProxySettings:(id)a0 service:(struct __SCNetworkProtocol { } *)a1;
- (struct __SCNetworkSet { } *)_createNewSetForNetworkNamed:(id)a0;
- (struct __SCNetworkSet { } *)_defaultSetRetained;
- (id)initWithNetworkProfile:(id)a0 settings:(id)a1;
- (id)initWithSSID:(id)a0 settings:(id)a1;

@end
