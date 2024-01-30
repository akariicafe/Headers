@class NSString, NSArray, NSOperationQueue;

@interface WFGetSettingsOperation : WFOperation

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;

- (id)initWithSSID:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNetworkProfile:(id)a0;

@end
