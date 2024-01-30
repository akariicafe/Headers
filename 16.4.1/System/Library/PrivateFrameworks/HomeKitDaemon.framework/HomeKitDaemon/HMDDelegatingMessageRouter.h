@class HMFMessageDispatcher, NSArray, NSString;
@protocol HMDDelegatingMessageRouterDataSource;

@interface HMDDelegatingMessageRouter : NSObject <HMFLogging, HMDMessageRouter>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSArray *routers;
@property (weak) id<HMDDelegatingMessageRouterDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
