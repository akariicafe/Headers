@class NSString, NSBundle, NSMutableDictionary, NSArray, NSMutableArray, PROPlugInFirewall;
@protocol PROBundleHandlerDelegate, PROPluginDynamicRegCompletion, PROVersionedAPIAccess, PROPlugInRegistering, PKPlugIn;

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing> {
    NSBundle *bundle;
    NSMutableArray *plugIns;
    NSMutableDictionary *groups;
    id<PROPlugInRegistering> principalClassInstance;
    struct { unsigned char canCreateInstances : 1; unsigned char askedAboutCreatingInstances : 1; unsigned int  : 30; } bundleFlags;
    NSArray *requestedProtocols;
    id<PROBundleHandlerDelegate> delegate;
    id<PROVersionedAPIAccess> apiManager;
    PROPlugInFirewall *apiAccessPoint;
    id<PKPlugIn> pluginKitPlug;
    id<PROPluginDynamicRegCompletion> setupCallbackObject;
    id /* block */ deferralCompletionBlock;
    BOOL deferred;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundle:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (void)reportError:(id)a0;
- (BOOL)isDeferred;
- (void)dealloc;
- (id)plugIns;
- (id)getBundle;
- (id)apiForProtocol:(id)a0;
- (id)apiManager;
- (id)pluginKitPlug;
- (void)loadDeferredPlugins;
- (void)notifyDeferralComplete;
- (void)addPlugIn:(id)a0;
- (id)groupsDictionary;
- (void)setAPIManager:(id)a0;
- (void)setPluginKitPlug:(id)a0;
- (void)registerPlugIns;
- (void)setRegistrationCallbackObject:(id)a0;
- (void)setDeferralNotification:(id /* block */)a0;
- (id)plugInGroupWithUUID:(struct __CFUUID { } *)a0;
- (void)plugInCouldNotInitialize:(id)a0;
- (void)plugIn:(id)a0 didError:(id)a1;
- (BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)a0;
- (id)apiManagerForPlugInInstances;
- (BOOL)isEqualToBundleHandler:(id)a0;
- (void)completeRegistrationWithGroups:(id *)a0 plugIns:(id *)a1 requestedProtocols:(id *)a2;
- (id)principalClassInstance;
- (BOOL)_plugInHasReservedUUID:(id)a0;
- (void)finishRegisteringPlugIns;
- (BOOL)dynamicPluginRequestedProtocolArray:(id *)a0 groupArray:(id *)a1 plugInArray:(id *)a2;
- (BOOL)shouldDeferLoading;
- (BOOL)isPrincipalClassAvailable;
- (void)plugInFirewall:(id)a0 receivedBadMessage:(SEL)a1;
- (void)registerDynamicPlugInsAsynch:(id)a0;
- (BOOL)loadingInProMSRendererTool;

@end
