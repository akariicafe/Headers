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

+ (id)logCategory;
+ (unsigned long long)restriction;
+ (id)remoteMessageFromMessage:(id)a0 secure:(BOOL)a1 accountRegistry:(id)a2;
+ (id)remoteMessageTransportsForProductInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)remoteMessageFromMessage:(id)a0;
- (id)matchResponse:(id)a0 requestedCapabilities:(id)a1;
- (BOOL)doesResponse:(id)a0 matchAllCapabilities:(id)a1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)a0;
- (long long)compareCapability:(id)a0 key:(id)a1 withCapability:(id)a2;

@end
