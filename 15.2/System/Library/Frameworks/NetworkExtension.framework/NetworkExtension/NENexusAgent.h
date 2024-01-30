@class NSString, NSUUID, NSObject, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent>

@property (retain) NWNetworkAgentRegistration *registration;
@property unsigned int frameType;
@property (weak) NSObject<NENexusAgentDelegate> *delegate;
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

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (void)unassertAgentWithOptions:(id)a0;
- (BOOL)assertAgentWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)startAgentWithOptions:(id)a0;
- (BOOL)requestNexusWithOptions:(id)a0;
- (void)closeNexusWithOptions:(id)a0;
- (id)copyAgentData;

@end
