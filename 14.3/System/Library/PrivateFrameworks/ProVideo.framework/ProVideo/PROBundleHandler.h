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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)reportError:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithBundle:(id)a0;
- (id)plugIns;
- (id)delegate;
- (id)apiForProtocol:(id)a0;
- (id)apiManager;
- (id)pluginKitPlug;
- (void)addPlugIn:(id)a0;
- (id)groupsDictionary;
- (void)setAPIManager:(id)a0;
- (void)setPluginKitPlug:(id)a0;
- (void)registerPlugIns;
- (void)setRegistrationCallbackObject:(id)a0;
- (id)plugInGroupWithUUID:(struct __CFUUID { } *)a0;
- (BOOL)isEqualToBundleHandler:(id)a0;
- (void)completeRegistrationWithGroups:(id *)a0 plugIns:(id *)a1 requestedProtocols:(id *)a2;
- (id)principalClassInstance;
- (BOOL)_plugInHasReservedUUID:(id)a0;
- (BOOL)dynamicPluginRequestedProtocolArray:(id *)a0 groupArray:(id *)a1 plugInArray:(id *)a2;
- (BOOL)isPrincipalClassAvailable;
- (void)plugInCouldNotInitialize:(id)a0;
- (void)plugIn:(id)a0 didError:(id)a1;
- (BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)a0;
- (id)apiManagerForPlugInInstances;
- (void)plugInFirewall:(id)a0 receivedBadMessage:(SEL)a1;
- (void)registerDynamicPlugInsAsynch:(id)a0;

@end
