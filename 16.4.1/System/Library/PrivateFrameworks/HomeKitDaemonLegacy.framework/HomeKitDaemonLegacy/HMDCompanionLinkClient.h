@class NSObject, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient>

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
