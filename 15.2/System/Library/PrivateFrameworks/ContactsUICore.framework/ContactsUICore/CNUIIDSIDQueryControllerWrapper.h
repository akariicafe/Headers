@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper>

@property (readonly, nonatomic) IDSIDQueryController *controller;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;

@end
