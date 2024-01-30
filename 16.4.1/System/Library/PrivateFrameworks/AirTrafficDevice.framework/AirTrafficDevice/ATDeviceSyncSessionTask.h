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

- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithDataClass:(id)a0 onMessageLink:(id)a1;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateProgressWithCount:(unsigned long long)a0 totalItemCount:(unsigned long long)a1;

@end
