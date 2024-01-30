@class NSArray, NSString, AMSUIWebClientContext;

@interface AMSUIWebMetricsAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL shouldFlush;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
