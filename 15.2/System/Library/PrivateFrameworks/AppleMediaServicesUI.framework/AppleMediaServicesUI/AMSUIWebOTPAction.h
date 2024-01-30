@class NSString;

@interface AMSUIWebOTPAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
