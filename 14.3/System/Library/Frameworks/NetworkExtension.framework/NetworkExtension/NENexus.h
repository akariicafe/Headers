@class NSArray, NENexusFlowManager, NSMutableDictionary, NEPolicySession, NSString, NSObject, NENexusAgent;
@protocol OS_nw_nexus, NENexusDelegate;

@interface NENexus : NSObject <NENexusAgentDelegate>

@property (retain) NSObject<OS_nw_nexus> *userNexus;
@property (retain) NSMutableDictionary *userNexusInstances;
@property (retain) NSMutableDictionary *userNexusClientCount;
@property (retain) NSMutableDictionary *userNexusClientFlows;
@property (retain) NSMutableDictionary *assertions;
@property (getter=isAsserted) BOOL asserted;
@property struct NEVirtualInterface_s { } *virtualInterface;
@property (retain) NENexusFlowManager *flowManager;
@property (retain) NEPolicySession *policySession;
@property (retain) NENexusAgent *agent;
@property (weak) NSObject<NENexusDelegate> *delegate;
@property (retain) NSMutableDictionary *kernelNexusClientFlows;
@property (readonly) unsigned long long level;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSString *interfaceName;
@property (nonatomic) unsigned long long availability;
@property (retain, nonatomic) NSArray *localAddresses;
@property (retain, nonatomic) NSArray *dnsServerAddresses;
@property (nonatomic) unsigned long long maximumTransmissionUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithLevel:(unsigned long long)a0 name:(id)a1 virtualInterfaceType:(long long)a2 delegate:(id)a3 channelCount:(unsigned int)a4;
- (void)handleAssertFromClient:(id)a0;
- (void)handleUnassertFromClient:(id)a0;
- (void)connectNewFlow:(id)a0;
- (void)disconnectFlow:(id)a0;
- (id)initWithLevel:(unsigned long long)a0 name:(id)a1 virtualInterfaceType:(long long)a2 delegate:(id)a3 channelCount:(unsigned int)a4 netifRingSize:(unsigned int)a5 kernelPipeTxRingSize:(unsigned int)a6 kernelPipeRxRingSize:(unsigned int)a7;
- (void).cxx_destruct;
- (BOOL)handleRequestNexusFromClient:(id)a0;
- (void)closeFlowWithClientIdentifier:(id)a0;
- (void)handleStartFromClient:(id)a0;
- (BOOL)setupFlowManager;
- (BOOL)setupPolicySession;
- (void)rejectFlowWithClientIdentifier:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 delegate:(id)a1;

@end
