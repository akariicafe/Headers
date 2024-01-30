@class IDSService, NSString;

@interface CRKConcreteIDSMessageSendListener : NSObject <IDSServiceDelegate, CRKIDSListener>

@property (readonly, nonatomic) IDSService *service;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithService:(id)a0 handler:(id /* block */)a1;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithService:(id)a0 handler:(id /* block */)a1;

@end
