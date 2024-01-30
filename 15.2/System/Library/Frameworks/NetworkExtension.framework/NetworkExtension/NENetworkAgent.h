@class NSUUID, NSString;

@interface NENetworkAgent : NSObject <NWNetworkAgent>

@property (copy) NSUUID *internalUUID;
@property int internalSessionType;
@property (retain) NSString *name;
@property (copy) id /* block */ internalStartHandler;
@property (readonly, copy) NSUUID *configurationUUID;
@property (copy) NSString *configurationName;
@property (readonly) int sessionType;
@property int lastStatus;
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

- (void)setStartHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfigUUID:(id)a0 sessionType:(int)a1 name:(id)a2;
- (BOOL)startAgentWithOptions:(id)a0;
- (id)copyAgentData;
- (BOOL)matchesFileHandle:(id)a0;

@end
