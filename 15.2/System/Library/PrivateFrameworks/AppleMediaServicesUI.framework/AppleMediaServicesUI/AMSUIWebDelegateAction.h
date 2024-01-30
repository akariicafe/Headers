@class NSDictionary, NSString;

@interface AMSUIWebDelegateAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSDictionary *delegateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)_handleResolveAction;
- (id)_handleActionObject:(id)a0;
- (id)_didResolveWithResult:(id)a0 error:(id)a1;

@end
