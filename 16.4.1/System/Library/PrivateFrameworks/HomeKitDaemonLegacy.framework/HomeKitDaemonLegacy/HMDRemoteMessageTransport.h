@class HMDAccountRegistry, NSString, HMFFuture, HMFPromise;
@protocol HMDRemoteMessageTransportReachabilityDelegate;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging, HMFDumpState>

@property (readonly, nonatomic) HMFFuture *startFuture;
@property (readonly, nonatomic) HMFPromise *startPromise;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) long long qualityOfService;
@property (weak, nonatomic) id<HMDRemoteMessageTransportReachabilityDelegate> reachabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)logCategory;
+ (id)_createModernTransportForProductInfo:(id)a0 preferences:(id)a1;
+ (id)remoteMessageFromMessage:(id)a0 secure:(BOOL)a1 accountRegistry:(id)a2;
+ (id)remoteMessageTransportsForProductInfo:(id)a0;

- (id)dumpState;
- (id)init;
- (id)start;
- (void).cxx_destruct;
- (BOOL)canSendMessage:(id)a0;
- (BOOL)isValidMessage:(id)a0;
- (long long)compareCapability:(id)a0 key:(id)a1 withCapability:(id)a2;
- (BOOL)doesResponse:(id)a0 matchAllCapabilities:(id)a1;
- (id)initWithAccountRegistry:(id)a0;
- (id)matchResponse:(id)a0 requestedCapabilities:(id)a1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)a0;
- (id)remoteMessageFromMessage:(id)a0;

@end
