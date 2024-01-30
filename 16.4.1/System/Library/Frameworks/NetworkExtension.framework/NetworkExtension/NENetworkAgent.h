@class NSUUID, NSString;

@interface NENetworkAgent : NSObject <NWNetworkAgent> {
    int _internalSessionType;
    NSUUID *_internalUUID;
    NSString *_name;
    id /* block */ _internalStartHandler;
}

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

- (id)copyAgentData;
- (void).cxx_destruct;
- (BOOL)startAgentWithOptions:(id)a0;
- (void)setStartHandler:(id /* block */)a0;
- (id)initWithConfigUUID:(id)a0 sessionType:(int)a1 name:(id)a2;
- (BOOL)matchesFileHandle:(id)a0;

@end
