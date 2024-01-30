@class NSString, NSMutableArray;

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    BOOL updateClientsImmediately;
}

@property (copy) id /* block */ internalAssertHandler;
@property (copy) id /* block */ internalUnassertHandler;
@property (retain) NSMutableArray *predictedInterfaceArray;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property BOOL weakAdvisory;
@property BOOL noAdvisoryTimer;
@property BOOL preferAdvisory;
@property (nonatomic) BOOL isForcedAdvisory;

+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void)setAssertHandler:(id /* block */)a0;
- (void)unassertAgentWithOptions:(id)a0;
- (BOOL)assertAgentWithOptions:(id)a0;
- (void)setUnassertHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAdvisoryInterface:(id)a0 advisoryMode:(unsigned long long)a1;
- (id)initWithAdvisoryAgentDomain:(id)a0 agentType:(id)a1 advisoryMode:(unsigned long long)a2;
- (void)setUpdateClientsImmediately:(BOOL)a0;
- (BOOL)updateClientsImmediately;
- (id)copyAgentData;

@end
