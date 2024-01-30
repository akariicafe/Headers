@class NSArray, NSString;

@interface AMSUIWebMetricsAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL shouldFlush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
