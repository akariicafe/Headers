@class NSArray, AMSDialogRequest, NSString;

@interface AMSUIWebDialogAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) BOOL pauseTimeouts;
@property (retain, nonatomic) NSArray *buttonModels;
@property (retain, nonatomic) AMSDialogRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
