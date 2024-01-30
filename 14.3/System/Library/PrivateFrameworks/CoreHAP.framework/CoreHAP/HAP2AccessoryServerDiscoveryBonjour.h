@class HAP2PropertyLock, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_nw_browser, HAP2AccessoryServerDiscoveryDelegate;

@interface HAP2AccessoryServerDiscoveryBonjour : HAP2LoggingObject <HAP2AccessoryServerDiscovery>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;
@property (retain, nonatomic) NSMutableArray *browseResults;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;
@property (weak, nonatomic) id<HAP2AccessoryServerDiscoveryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)stopDiscovering;
- (id)init;
- (void).cxx_destruct;
- (void)_startDiscovering;
- (void)dealloc;
- (void)_stopDiscovering;
- (void)reconfirmAccessory:(id)a0;
- (void)_stopBrowser;
- (void)startDiscovering;
- (void)_startBrowser;
- (id)initWithServiceType:(id)a0 domain:(id)a1;
- (id)initWithLocalDomainAndServiceType:(id)a0;
- (void)_handleStateChange:(int)a0 error:(id)a1;
- (void)_handleBrowseResultsChange:(id)a0 curent:(id)a1 batchComplete:(BOOL)a2;
- (void)_handleBrowseResults:(id)a0;

@end
