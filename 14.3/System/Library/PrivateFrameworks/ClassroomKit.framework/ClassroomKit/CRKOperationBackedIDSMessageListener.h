@class NSString, CATRemoteTaskOperation;

@interface CRKOperationBackedIDSMessageListener : NSObject <CATTaskOperationNotificationDelegate, CRKIDSListener>

@property (readonly, nonatomic) CATRemoteTaskOperation *listenOperation;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)invalidate;
- (id)initWithListenOperation:(id)a0 handler:(id /* block */)a1;

@end
