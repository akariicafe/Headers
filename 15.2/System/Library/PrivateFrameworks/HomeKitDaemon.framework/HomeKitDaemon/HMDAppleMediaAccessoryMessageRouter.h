@class NSUUID, HMFMessageDispatcher, NSString;
@protocol HMDAppleMediaAccessoryMessageRouterDataSource;

@interface HMDAppleMediaAccessoryMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) id<HMDAppleMediaAccessoryMessageRouterDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)routeMessage:(id)a0 localHandler:(id /* block */)a1;
- (void)relayMessage:(id)a0 device:(id)a1;
- (id)initWithIdentifier:(id)a0 messageDispatcher:(id)a1;
- (id)dataSourceDevice;

@end
