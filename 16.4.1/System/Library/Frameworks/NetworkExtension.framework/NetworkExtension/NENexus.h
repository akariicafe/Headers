@class NENexusAgent, NSString, NSArray, NSMutableDictionary, NENexusFlowManager, NSObject, NEPolicySession;
@protocol OS_nw_nexus, NENexusDelegate;

@interface NENexus : NSObject <NENexusAgentDelegate> {
    NSObject<OS_nw_nexus> *_userNexus;
    NSMutableDictionary *_userNexusInstances;
    NSMutableDictionary *_userNexusClientCount;
    NSMutableDictionary *_userNexusClientFlows;
    NSMutableDictionary *_assertions;
    NENexusFlowManager *_flowManager;
    NEPolicySession *_policySession;
    NENexusAgent *_agent;
    NSObject<NENexusDelegate> *_delegate;
    NSMutableDictionary *_kernelNexusClientFlows;
}

@property (getter=isAsserted) BOOL asserted;
@property struct NEVirtualInterface_s { } *virtualInterface;
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
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (id)initWithLevel:(unsigned long long)a0 name:(id)a1 virtualInterfaceType:(long long)a2 delegate:(id)a3 channelCount:(unsigned int)a4 netifRingSize:(unsigned int)a5 kernelPipeTxRingSize:(unsigned int)a6 kernelPipeRxRingSize:(unsigned int)a7 execUUID:(id)a8;
- (void)closeFlowWithClientIdentifier:(id)a0;
- (void)handleAssertFromClient:(id)a0;
- (BOOL)handleRequestNexusFromClient:(id)a0;
- (void)handleStartFromClient:(id)a0;
- (void)handleUnassertFromClient:(id)a0;
- (id)initWithLevel:(unsigned long long)a0 name:(id)a1 virtualInterfaceType:(long long)a2 delegate:(id)a3 channelCount:(unsigned int)a4;

@end
