@class NSString, NSUUID, NSObject;
@protocol NSPPrivacyProxyTokenAgentDelegate;

@interface NSPPrivacyProxyTokenAgent : NSObject <NWNetworkAgent>

@property (weak) NSObject<NSPPrivacyProxyTokenAgentDelegate> *delegate;
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

- (void)tokenLowWaterMarkReached;
- (void).cxx_destruct;
- (BOOL)reportError:(int)a0 withOptions:(id)a1;
- (id)copyAgentData;
- (id)initWithDelegate:(id)a0 uuid:(id)a1 agentDesc:(id)a2;

@end
