@class NSString, NSDictionary;

@interface AMSUIWebCallbackAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
