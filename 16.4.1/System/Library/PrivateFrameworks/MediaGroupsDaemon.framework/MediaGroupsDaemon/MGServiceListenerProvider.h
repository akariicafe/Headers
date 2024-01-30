@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MGServiceListenerProvider : NSObject <MGServiceListenerProviderProtocol>

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *entitlement;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
