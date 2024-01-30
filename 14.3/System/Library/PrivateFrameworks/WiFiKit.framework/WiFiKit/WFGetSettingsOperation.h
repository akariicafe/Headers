@class NSString, NSArray, NSOperationQueue;

@interface WFGetSettingsOperation : WFOperation

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;

- (void).cxx_destruct;
- (id)initWithSSID:(id)a0;
- (void)dealloc;
- (void)start;
- (id)initWithNetworkProfile:(id)a0;

@end
