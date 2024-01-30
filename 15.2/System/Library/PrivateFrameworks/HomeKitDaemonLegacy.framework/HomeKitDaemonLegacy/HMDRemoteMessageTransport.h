@class NSString, HMDAccountRegistry;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging>

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)a0 secure:(BOOL)a1 accountRegistry:(id)a2;
+ (id)remoteMessageTransportsForProductInfo:(id)a0;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)remoteMessageFromMessage:(id)a0;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)a0;
- (BOOL)doesResponse:(id)a0 matchAllCapabilities:(id)a1;
- (id)matchResponse:(id)a0 requestedCapabilities:(id)a1;
- (long long)compareCapability:(id)a0 key:(id)a1 withCapability:(id)a2;

@end
