@class UIApplication, NSString, INIntentDeliverer;

@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDelivererDelegate, INIntentDelivererDataSource> {
    id _handlerForIntent;
    INIntentDeliverer *_intentDeliverer;
    struct { unsigned int val[8]; } _currentHostProcessAuditToken;
}

@property (retain, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)executeAction:(id)a0 completionHandler:(id /* block */)a1;
- (struct { unsigned int x0[8]; })auditTokenForIntentDeliverer:(id)a0;
- (void)intentDeliverer:(id)a0 deliverIntent:(id)a1 withBlock:(id /* block */)a2;

@end
