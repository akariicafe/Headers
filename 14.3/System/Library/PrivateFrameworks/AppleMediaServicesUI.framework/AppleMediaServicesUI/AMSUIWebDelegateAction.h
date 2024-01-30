@class NSDictionary, NSString, AMSUIWebClientContext;

@interface AMSUIWebDelegateAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *delegateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
