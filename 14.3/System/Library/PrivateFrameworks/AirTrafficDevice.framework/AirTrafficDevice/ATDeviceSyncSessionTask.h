@class NSString, ATConcreteMessageLink, NSObject;
@protocol OS_dispatch_queue;

@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler>

@property (readonly, copy, nonatomic) NSString *dataClass;
@property (readonly, nonatomic) ATConcreteMessageLink *messageLink;
@property (readonly, nonatomic) NSString *linkIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
