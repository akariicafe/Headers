@class NSString, CATRemoteTaskOperation;

@interface CRKOperationBackedIDSMessageSubscription : NSObject <CATTaskOperationNotificationDelegate, CRKCancelable>

@property (readonly, nonatomic) CATRemoteTaskOperation *listenOperation;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)initWithListenOperation:(id)a0 handler:(id /* block */)a1;

@end
