@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *relayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceIsAuthorized:(id)a0;
+ (id)authorizedSMSRelayDevices;
+ (unsigned long long)numberOfActiveDevices;
+ (BOOL)shouldShowSMSRelaySettings;

- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setDeviceActive:(id)a0 specifier:(id)a1;
- (id)getDeviceActive:(id)a0;

@end
