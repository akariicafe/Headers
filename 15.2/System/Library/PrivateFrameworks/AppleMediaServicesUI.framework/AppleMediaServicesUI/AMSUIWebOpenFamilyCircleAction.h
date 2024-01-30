@class NSString;

@interface AMSUIWebOpenFamilyCircleAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
