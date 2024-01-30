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

- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setDeviceActive:(id)a0 specifier:(id)a1;
- (id)getDeviceActive:(id)a0;

@end
