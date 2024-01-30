@class NSString, NSUUID, NWNetworkAgentRegistration;

@interface VCNetworkAgentCell : VCObject <NWNetworkAgent> {
    int _assertionRefCount;
    NWNetworkAgentRegistration *_agentRegistration;
    NSString *_wifiInterfaceName;
}

@property (readonly) BOOL cellularAssertionActive;
@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (nonatomic, getter=isUserActivated) BOOL userActivated;
@property (nonatomic, getter=isVoluntary) BOOL voluntary;
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic) BOOL updateClientsImmediately;

+ (id)sharedInstance;
+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (id)init;
- (void)dealloc;
- (id)copyAgentData;
- (void)addCellularAssertion;
- (void)removeCellularAssertion;
- (id)queryWifiInterfaceName;

@end
